[](../header.md ':include')

# cf_json_to_file

Category: [json](/api_reference?id=json)  
GitHub: [cute_json.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_json.h)  
---

Saves the json document to a file.

```cpp
CF_Result cf_json_to_file(CF_JDoc doc, const char* virtual_path);
```

Parameters | Description
--- | ---
doc | The json document to save.
virtual_path | A virtual path to the json file. See [Virtual File System](https://randygaul.github.io/cute_framework/#/topics/virtual_file_system).

## Remarks

If you want to remove all unnecessary formatting/whitespace then use [cf_json_to_file_minimal](/json/cf_json_to_file_minimal.md).

## Related Pages

[CF_JDoc](/json/cf_jdoc.md)  
[cf_make_json](/json/cf_make_json.md)  
[cf_make_json_from_file](/json/cf_make_json_from_file.md)  
[cf_json_get_root](/json/cf_json_get_root.md)  
[cf_destroy_json](/json/cf_destroy_json.md)  
[cf_json_get_root](/json/cf_json_get_root.md)  
[cf_json_to_string](/json/cf_json_to_string.md)  
[cf_json_to_file_minimal](/json/cf_json_to_file_minimal.md)  
[cf_json_to_string_minimal](/json/cf_json_to_string_minimal.md)  