/*
	Cute Framework
	Copyright (C) 2019 Randy Gaul https://randygaul.net

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgment in the product documentation would be
	   appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.
*/

#include <cute_ecs.h>
#include <cute_c_runtime.h>
#include <cute_kv.h>
#include <cute_log.h>

#include <internal/cute_app_internal.h>

namespace cute
{

//--------------------------------------------------------------------------------------------------

void app_register_system(app_t* app, system_fn* system_update_function, component_type_t* types, int types_count)
{
	system_t& system = app->systems.add();
	system.update_func = system_update_function;
	for (int i = 0; i < types_count; ++i) system.component_types.add(types[i]);
}

entity_t app_make_entity(app_t* app, entity_type_t type)
{
	// TODO: Implement me.
	entity_t entity;
	entity.type = CUTE_INVALID_ENTITY_TYPE;
	entity.handle = CUTE_INVALID_HANDLE;
	return entity;
}

void app_destroy_entity(app_t* app, entity_t entity)
{
	// TODO: Implement me.
}

bool app_is_entity_valid(app_t* app, entity_t entity)
{
	return false; // TODO: Implement me.
}

static void s_1(float dt, system_fn* fn_uncasted, typeless_array& c0)
{
	auto fn = (void (*)(float, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i]);
}

static void s_2(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1)
{
	CUTE_ASSERT(c0.count() == c1.count());
	auto fn = (void (*)(float, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i]);
}

static void s_3(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count());
	auto fn = (void (*)(float, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i]);
}

static void s_4(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2, typeless_array& c3)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count() && c0.count() == c3.count());
	auto fn = (void (*)(float, void*, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i], c3[i]);
}

static void s_5(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2, typeless_array& c3, typeless_array& c4)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count() && c0.count() == c3.count() && c0.count() == c4.count());
	auto fn = (void (*)(float, void*, void*, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i], c3[i], c4[i]);
}

static void s_6(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2, typeless_array& c3, typeless_array& c4, typeless_array& c5)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count() && c0.count() == c3.count() && c0.count() == c4.count() && c0.count() == c5.count());
	auto fn = (void (*)(float, void*, void*, void*, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i], c3[i], c4[i], c5[i]);
}

static void s_7(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2, typeless_array& c3, typeless_array& c4, typeless_array& c5, typeless_array& c6)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count() && c0.count() == c3.count() && c0.count() == c4.count() && c0.count() == c5.count() && c0.count() == c6.count());
	auto fn = (void (*)(float, void*, void*, void*, void*, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i], c3[i], c4[i], c5[i], c6[i]);
}

static void s_8(float dt, system_fn* fn_uncasted, typeless_array& c0, typeless_array& c1, typeless_array& c2, typeless_array& c3, typeless_array& c4, typeless_array& c5, typeless_array& c6, typeless_array& c7)
{
	CUTE_ASSERT(c0.count() == c1.count() && c0.count() == c2.count() && c0.count() == c3.count() && c0.count() == c4.count() && c0.count() == c5.count() && c0.count() == c6.count() && c0.count() == c7.count());
	auto fn = (void (*)(float, void*, void*, void*, void*, void*, void*, void*, void*))fn_uncasted;
	int count = c0.count();

	for (int i = 0; i < count; ++i)
		fn(dt, c0[i], c1[i], c2[i], c3[i], c4[i], c5[i], c6[i], c7[i]);
}

static inline void s_match(array<int>* matches, const array<component_type_t>& a, const array<component_type_t>& b)
{
	for (int i = 0; i < a.count(); ++i)
	{
		for (int j = 0; j < b.count(); ++j)
		{
			if (a[i] == b[j]) {
				matches->add(i);
				break;
			}
		}
	}
}

void app_update_systems(app_t* app)
{
	float dt = 0;
	int system_count = app->systems.count();
	for (int i = 0; i < system_count; ++i)
	{
		system_t* system = app->systems + i;
		system_fn* func = system->update_func;

		for (int j = 0; j < app->entity_collections.count(); ++j)
		{
			entity_collection_t* collection = app->entity_collections.items() + j;
			CUTE_ASSERT(collection->component_tables.count() == collection->component_types.count());
			int component_count = collection->component_tables.count();

			array<int> matches;
			s_match(&matches, system->component_types, collection->component_types);

			array<typeless_array>& tables = collection->component_tables;
			if (matches.count() == component_count) {
				switch (component_count)
				{
				case 1: s_1(dt, func, tables[matches[0]]); break;
				case 2: s_2(dt, func, tables[matches[0]], tables[matches[1]]); break;
				case 3: s_3(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]]); break;
				case 4: s_4(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]], tables[matches[3]]); break;
				case 5: s_5(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]], tables[matches[3]], tables[matches[4]]); break;
				case 6: s_6(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]], tables[matches[3]], tables[matches[4]], tables[matches[5]]); break;
				case 7: s_7(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]], tables[matches[3]], tables[matches[4]], tables[matches[5]], tables[matches[6]]); break;
				case 8: s_8(dt, func, tables[matches[0]], tables[matches[1]], tables[matches[2]], tables[matches[3]], tables[matches[4]], tables[matches[5]], tables[matches[6]], tables[matches[7]]); break;
				default: CUTE_ASSERT(0);
				}
			}
		}
	}
}

//--------------------------------------------------------------------------------------------------

error_t app_register_component_type(app_t* app, const component_config_t* component_config)
{
	app->component_name_to_type_table.insert(component_config->name, component_config->type);
	app->component_configs.insert(component_config->type, *component_config);
	return error_success();
}

//--------------------------------------------------------------------------------------------------

error_t app_register_entity_type(app_t* app, const entity_schema_t* schema)
{
	// Parse the schema.
	kv_t* parsed_schema = kv_make(app->mem_ctx);
	error_t err = kv_parse(parsed_schema, schema->memory, schema->size);
	if (err.is_error()) return err;

	err = kv_key(parsed_schema, "entity_type");
	if (err.is_error()) return err;

	entity_type_t entity_type;
	err = kv_val(parsed_schema, &entity_type);
	if (err.is_error()) return err;

	entity_type_t inherits_from = CUTE_INVALID_ENTITY_TYPE;
	err = kv_key(parsed_schema, "inherits_from");
	if (!err.is_error()) {
		err = kv_val(parsed_schema, &inherits_from);
	}

	// Search for all component types present in the schema.
	int component_config_count = app->component_configs.count();
	const component_config_t* component_configs = app->component_configs.items();
	array<component_type_t> component_types;
	for (int i = 0; i < component_config_count; ++i)
	{
		const component_config_t* config = component_configs + i;

		err = kv_key(parsed_schema, config->name);
		if (!err.is_error()) {
			component_type_t* component_type = app->component_name_to_type_table.find(config->name);
			if (!component_type) {
				log(CUTE_LOG_LEVEL_ERROR, "Unable to find type for component name %s.\n", config->name);
				return error_failure("Encountered invalid component name.");
			} else {
				component_types.add(*component_type);
			}
		}
	}
	kv_reset_read_state(parsed_schema);

	// Register component types.
	entity_collection_t* collection = app->entity_collections.insert(entity_type);
	for (int i = 0; i < component_types.count(); ++i)
	{
		collection->component_types.add(component_types[i]);
		typeless_array& table = collection->component_tables.add();
		component_config_t* config = app->component_configs.find(component_types[i]);
		table.m_element_size = config->size_of_component;
	}

	// Store the parsed schema.
	app->entity_parsed_schemas.insert(entity_type, parsed_schema);
	if (inherits_from != CUTE_INVALID_COMPONENT_TYPE) {
		app->entity_schema_inheritence.insert(entity_type, inherits_from);
	}

	return error_success();
}

static error_t s_load_from_schema(app_t* app, entity_type_t entity_type, component_config_t* config, void* component, void* udata)
{
	// Look for parent.
	// If parent exists, load values from it first.
	entity_type_t inherits_from;
	error_t err = app->entity_schema_inheritence.find(entity_type, &inherits_from);
	if (!err.is_error()) {
		err = s_load_from_schema(app, inherits_from, config, component, udata);
		if (err.is_error()) return err;
	}

	kv_t* schema;
	err = app->entity_parsed_schemas.find(entity_type, &schema);
	if (err.is_error()) return error_failure("Unable to find schema when loading entity.");

	err = kv_key(schema, config->name);
	if (err.is_error()) return err;

	kv_object_begin(schema);
	err = config->serializer_fn(app, schema, component, udata);
	kv_object_end(schema);
	return err;
}

error_t app_load_entities(app_t* app, const void* memory, size_t size)
{
	kv_t* kv = kv_make(app->mem_ctx);
	error_t err = kv_parse(kv, memory, size);
	if (err.is_error()) {
		return err;
	}

	err = kv_key(kv, "entities");
	if (err.is_error()) {
		return error_failure("Unable to find `entities` array in kv file.");
	}

	int entity_count;
	err = kv_array_begin(kv, &entity_count);
	if (err.is_error()) {
		return error_failure("The `entities` key is not an array.");
	}

	while (entity_count--)
	{
		kv_object_begin(kv);

		entity_type_t entity_type = CUTE_INVALID_ENTITY_TYPE;
		kv_key(kv, "entity_type");
		kv_val(kv, &entity_type);

		if (entity_type == CUTE_INVALID_ENTITY_TYPE) {
			kv_destroy(kv);
			return error_failure("Unable to find entity type.");
		}

		entity_collection_t* collection = app->entity_collections.find(entity_type);
		CUTE_ASSERT(collection);

		const array<component_type_t>& component_types = collection->component_types;
		for (int i = 0; i < component_types.count(); ++i)
		{
			component_type_t component_type = component_types[i];
			component_config_t* config = app->component_configs.find(component_type);

			if (!config) {
				kv_destroy(kv);
				return error_failure("Unable to find component config.");
			}

			int index = collection->component_tables.count();
			void* component = collection->component_tables[i].add();
			config->initializer_fn(app, component, config->initializer_fn_udata);

			// First load values from the schema.
			err = s_load_from_schema(app, entity_type, config, component, config->serializer_fn_udata);
			if (err.is_error()) {
				kv_destroy(kv);
				return error_failure("Unable to parse component from schema.");
			}

			// Then load values from the instance.
			error_t err = kv_key(kv, config->name);
			if (!err.is_error()) {
				kv_object_begin(kv);
				err = config->serializer_fn(app, kv, component, config->serializer_fn_udata);
				kv_object_end(kv);
				if (err.is_error()) {
					kv_destroy(kv);
					return error_failure("Unable to parse component from `memory`.");
				}
			}

			handle_t h = collection->entity_handle_table.alloc_handle(index);
			collection->entity_handles.add(h);
		}

		kv_object_end(kv);
	}

	kv_array_end(kv);
	kv_destroy(kv);

	return error_success();
}

error_t app_save_entities(app_t* app, const array<entity_t>& entities, void* memory, size_t size)
{
	kv_t* kv = kv_make(app->mem_ctx);
	kv_set_write_buffer(kv, memory, size);

	dictionary<entity_t, int> id_table;
	for (int i = 0; i < entities.count(); ++i)
		id_table.insert(entities[i], i);

	app->save_id_table = &id_table;

	for (int i = 0; i < entities.count(); ++i)
	{
		entity_t entity = entities[i];
		entity_collection_t* collection = app->entity_collections.find(entity.type);
		if (!collection) {
			kv_destroy(kv);
			app->save_id_table = NULL;
			return error_failure("Unable to find entity type.");
		}

		bool is_valid = collection->entity_handle_table.is_valid(entity.handle);
		if (!is_valid) {
			kv_destroy(kv);
			app->save_id_table = NULL;
			return error_failure("Attempted to save an invalid entity.");
		}
		uint32_t index = collection->entity_handle_table.get_index(entity.handle);

		const array<component_type_t>& component_types = collection->component_types;
		const array<typeless_array>& component_tables = collection->component_tables;
		for (int j = 0; j < component_types.count(); ++j)
		{
			component_type_t component_type = component_types[j];
			const typeless_array& component_table = component_tables[j];
			component_config_t* config = app->component_configs.find(component_type);
			const void* component = component_table[index];

			error_t err = config->serializer_fn(app, kv, (void*)component, config->serializer_fn_udata);
			if (err.is_error()) {
				kv_destroy(kv);
				app->save_id_table = NULL;
				return err;
			}
		}
	}

	kv_destroy(kv);
	app->save_id_table = NULL;

	return error_success();
}

}