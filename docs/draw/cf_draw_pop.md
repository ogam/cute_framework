[//]: # (This file is automatically generated by Cute Framework's docs parser.)
[//]: # (Do not edit this file by hand!)
[//]: # (See: https://github.com/RandyGaul/cute_framework/blob/master/samples/docs_parser.cpp)
[](../header.md ':include')

# cf_draw_pop

Category: [draw](/api_reference?id=draw)  
GitHub: [cute_draw.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_draw.h)  
---

Restores the previous coordinate system.

```cpp
void cf_draw_pop();
```

## Remarks

This function is essential for drawing things locally without affecting the coordinate
system of anything else that needs to draw. See [cf_draw_push](/draw/cf_draw_push.md) for details.

## Related Pages

[cf_draw_push](/draw/cf_draw_push.md)  
[cf_draw_TRS](/draw/cf_draw_trs.md)  
[cf_draw_peek](/draw/cf_draw_peek.md)  
[cf_draw_translate](/draw/cf_draw_translate.md)  
[cf_draw_transform](/draw/cf_draw_transform.md)  
[cf_draw_translate](/draw/cf_draw_translate.md)  
[cf_draw_scale](/draw/cf_draw_scale.md)  
[cf_draw_rotate](/draw/cf_draw_rotate.md)  
