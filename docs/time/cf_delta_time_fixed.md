[//]: # (This file is automatically generated by Cute Framework's docs parser.)
[//]: # (Do not edit this file by hand!)
[//]: # (See: https://github.com/RandyGaul/cute_framework/blob/master/samples/docs_parser.cpp)
[](../header.md ':include')

# CF_DELTA_TIME_FIXED

Category: [time](/api_reference?id=time)  
GitHub: [cute_time.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_time.h)  
---

The time elapsed between two frames in fixed-timestep mode.

## Remarks

To turn on fixed-timestep use [cf_set_fixed_timestep](/time/cf_set_fixed_timestep.md). Fixed timestep is useful when games need determinism. Determinism
means given the same inputs, the exact same outputs are produced. This is especially important for networked games, or
games that require extreme precision and fine-tuning (such as certain fighting games or platformers).

## Related Pages

[CF_DELTA_TIME](/time/cf_delta_time.md)  
[cf_update_time](/time/cf_update_time.md)  
[CF_OnUpdateFn](/time/cf_onupdatefn.md)  
[CF_DELTA_TIME_INTERPOLANT](/time/cf_delta_time_interpolant.md)  
[cf_set_fixed_timestep](/time/cf_set_fixed_timestep.md)  
[cf_set_fixed_timestep_max_updates](/time/cf_set_fixed_timestep_max_updates.md)  
