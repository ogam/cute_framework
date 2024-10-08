[//]: # (This file is automatically generated by Cute Framework's docs parser.)
[//]: # (Do not edit this file by hand!)
[//]: # (See: https://github.com/RandyGaul/cute_framework/blob/master/samples/docs_parser.cpp)
[](../header.md ':include')

# cf_joypad_rumble

Category: [input](/api_reference?id=input)  
GitHub: [cute_joypad.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_joypad.h)  
---

Rumbles the joypad.

```cpp
void cf_joypad_rumble(int player_index, uint16_t lo_frequency_rumble, uint16_t hi_frequency_rumble, int duration_ms);
```

Parameters | Description
--- | ---
player_index | An index represeting the joypad for a particular player, starting at 0.
lo_frequency_rumble | Rumble intensity from 0 to 65535. Represents the low frequency motor (or left motor).
hi_frequency_rumble | Rumble intensity from 0 to 65535. Represents the high frequency motor (or right motor).

## Remarks

Calling this function cancels any previous rumbles. Sending in 0 for either low/high frequency parameters cancels the rumble.

## Related Pages

CF_Joypad  
[CF_JoypadButton](/input/cf_joypadbutton.md)  
[cf_joypad_button_down](/input/cf_joypad_button_down.md)  
[cf_joypad_button_just_pressed](/input/cf_joypad_button_just_pressed.md)  
[cf_joypad_button_just_released](/input/cf_joypad_button_just_released.md)  
[cf_joypad_axis](/input/cf_joypad_axis.md)  
