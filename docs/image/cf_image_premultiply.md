[//]: # (This file is automatically generated by Cute Framework's docs parser.)
[//]: # (Do not edit this file by hand!)
[//]: # (See: https://github.com/RandyGaul/cute_framework/blob/master/samples/docs_parser.cpp)
[](../header.md ':include')

# cf_image_premultiply

Category: [image](/api_reference?id=image)  
GitHub: [cute_image.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_image.h)  
---

Premultiplies the alpha component of each pixel with the RGB color components.

```cpp
void cf_image_premultiply(CF_Image* img);
```

Parameters | Description
--- | ---
img | The image to premultiply.

## Remarks

Premultiplying images is a common way to deal with colors, especially when blending.
Here is a good resource for learning about [premultiplied alpha](https://iquilezles.org/articles/premultipliedalpha/).

## Related Pages

[CF_Image](/image/cf_image.md)  