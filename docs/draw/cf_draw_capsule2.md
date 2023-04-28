[](../header.md ':include')

# cf_draw_capsule2

Category: [draw](/api_reference?id=draw)  
GitHub: [cute_draw.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_draw.h)  
---

Draws a capsule wireframe.

```cpp
void cf_draw_capsule2(CF_Capsule capsule, int iters, float thickness);
```

Parameters | Description
--- | ---
capsule | The capsule.
iters | Number of edges used for the circle-caps. More looks smoother, but renders slower.
thickness | The thickness of each line to draw.

## Related Pages

[cf_draw_capsule](/draw/cf_draw_capsule.md)  
[cf_draw_capsule_fill](/draw/cf_draw_capsule_fill.md)  
cf_draw_to  
[cf_app_draw_onto_screen](/app/cf_app_draw_onto_screen.md)  