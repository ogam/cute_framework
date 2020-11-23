# Entity Component System

The [Entity Component System](https://en.wikipedia.org/wiki/Entity_component_system) (ECS) is an optional feature in Cute Framework used to organize your game code and gameplay logic. The idea is to clearly separate data from logic and make game object composition modular.

A key benefit of using the ECS is having a clear answer to the question "where does the code that does X belong", where X is some gameplay feature. Write systems to hold your gameplay logic, components to hold your data, and entities to define grouped collections of components. With ECS, typically you think about what entities your game needs, break them down into reusable components, and define systems to handle their behaviors.

* An **Entity** is a game object, defined as a collection of components and registered with a name.
* A **Component** is an aspect or trait of an entity. They are like building-blocks that can be mix-and-matched to create different entities.
* A **System** is a function that performs gameplay logic on entities. They are how behavior is handled in ECS.

In laymen's terms, entities are things, components are parts of things, and systems are how things behave.

**Disclaimer**: This is an oversimplification of ECS, but it is one that serves our purpose while minimizing confusion for now. For a full understanding, please consult your local [Google](https://www.google.com).

## Entities

An entity is merely a collection of components that represents a "thing" in your game, like an enemy, the player, or other game features. Before an entity instance can be created an entity type must be defined and registered with the ECS (like a blueprint). How to make components is explained in the next section.

> Registering a collection of 4 components as a new entity type called `Octorok`.

```cpp
array<const char*> component_types = {
	"Transform",
	"GridObject",
	"Sprite",
	"Octorok"	//Octorok component
};
app_register_entity_type(app, component_types, "Octorok");
```

All components are user defined (see Components section).

Once registered, an entity instance can be made by calling a single function `app_make_entity`.

```cpp
entity_t e;
app_make_entity(app, "Octorok", &e);
```

From here you can call a few different functions upon the entity.

```cpp
void app_delayed_destroy_entity(app_t* app, entity_t entity);
void app_destroy_entity(app_t* app, entity_t entity);
bool app_is_entity_valid(app_t* app, entity_t entity);
void* app_get_component(app_t* app, entity_t entity, const char* name);
bool app_has_component(app_t* app, entity_t entity, const char* name);
```

Here's an example of how to use `app_get_component`.

```cpp
Octorok* octorok = (Octorok*)app_get_component(app, e, "Octorok");
```

## Component

A component is merely some memory to hold a struct or class. Cute's ECS requires you to register component types. This tells the ECS some critical information like the size and name of your component. Here is an example of registering a component.

> An example of a component you might make for your game. Octorok is a type of enemy from Zelda games.

```cpp
enum OCTOROK_STATE
{
	OCTOROK_STATE_IDLE,
	OCTOROK_STATE_PATROL,
	OCTOROK_STATE_FIRE,
};

struct Octorok
{
	int pellet_count = 0;
	Pellet pellets[3];
	OCTOROK_STATE state = OCTOROK_STATE_IDLE;
};
```

> Registering the Octorok component.

```cpp
component_config_t config;
config.name = "Octorok";
config.size_of_component = sizeof(Octorok);
config.serializer_fn = octorok_serialize;
app_register_component_type(app, config);
```

### Creating or Destroying Components

In the above section the `octorok_serialize` was not explained. This is a function pointer to be called whenever a new instance of a component is loaded or saved. The function pointer type looks like this.

```cpp
typedef error_t (*serialize_fn)(app_t* app, kv_t* kv, bool reading, entity_t entity, void* component, void* udata);
```

For the Octorok example the implemented function might look like this.

```cpp
error_t octorok_serialize(app_t* app, kv_t* kv, bool reading, entity_t entity, void* component, void* udata)
{
	Octorok* octorok = (Octorok*)component;
	if (reading) {
		CUTE_PLACEMENT_NEW(octorok) Octorok;
	}
	return error_success();
}
```

For a detailed description of all the pieces of this function please see [here TODO](broken_link). Briefly: If this function is called for making a new component then `reading` is true, and false when saving. `entity` is the entity id for the new entity being created. The rest can be ignored for now.

## System

Systems are just functions. The purpose is to write your gameplay code systems. Each system must be registered into the ECS. The order the systems are updated is the order in which they are registered.

> Registering a system. This system only intakes a single type of component, the Octorok component. Systems can also intake up to 8 different kinds of components.

```cpp
system_config_t system;
system.component_types.add("Octorok");
system.update_fn = (void*)update_octorok_system;
app_register_system(app, system);
```

> An example of an empty (unimplemented) system for the Octorok component.

```cpp
void update_octorok_system(app_t* app, float dt, void* udata, Octorok* octoroks, int entity_count)
{
	for (int i = 0; i < entity_count; ++i) {
		Octorok* octorok = octoroks + i;
		// Update octoroks here ...
	}
}
```

A system can operate on more than just one kind of component, but the above example only operates on the Octorok component. This system will be called updated *all entities that contain an Octorok component*.

Here's an example of a different system that operates on two different component types.


```cpp
system_config_t system;
system.component_types = {
	"Transform",
	"Sprite"
};
system.update_fn = (void*)update_sprite_system;
app_register_system(app, system);

void update_sprite_system(app_t* app, float dt, void* udata, Transform* transforms, Sprite* sprites, int entity_count)
{
	for (int i = 0; i < entity_count; ++i) {
		Transform* transform = transforms + i;
		Sprite* sprite = Sprites + i;
		// Update the components of any entity that contains a Sprite and a Transform here ...
	}
}
```

If a particular entity contained many kinds of components, but also still contained a `Sprite` and a `Transform` component, then the `update_sprite_system` will still be called on that entity's `Sprite` and `Transform` component. In this way systems find and match any entity with the correct types of components, even if there are other types which will be ignored, and runs upon the matched components.