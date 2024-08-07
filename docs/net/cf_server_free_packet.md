[//]: # (This file is automatically generated by Cute Framework's docs parser.)
[//]: # (Do not edit this file by hand!)
[//]: # (See: https://github.com/RandyGaul/cute_framework/blob/master/samples/docs_parser.cpp)
[](../header.md ':include')

# cf_server_free_packet

Category: [net](/api_reference?id=net)  
GitHub: [cute_networking.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_networking.h)  
---

Frees a payload packet from a [CF_ServerEvent](/net/cf_serverevent.md).

```cpp
void cf_server_free_packet(CF_Server* server, int client_index, void* data);
```

## Related Pages

[CF_ServerEventType](/net/cf_servereventtype.md)  
[cf_server_event_type_to_string](/net/cf_server_event_type_to_string.md)  
[CF_ServerEvent](/net/cf_serverevent.md)  
[cf_server_pop_event](/net/cf_server_pop_event.md)  
