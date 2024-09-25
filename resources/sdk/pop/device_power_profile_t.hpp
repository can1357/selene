#pragma once
#include <sdkgen/support_library.hpp>
#include "../po/power_plane_profile_t.hpp"

#include "magic/device_power_profile_t.start.hpp"
namespace pop
{
    struct fx_device_t;
    struct power_plane_t;
    struct component_power_profile_t;

    // [struct _POP_DEVICE_POWER_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_power_profile_t                                            
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 nt::unicode_view                                device_id;        //{ +0x0000    +0x0000    +0x0000    } | .DeviceId
        _m01 struct pop::power_plane_t*                      power_plane;      //{ +0x0010    +0x0010    +0x0010    } | .PowerPlane
        _m02 struct pop::fx_device_t*                        fx_device;        //{ +0x0018    +0x0018    +0x0018    } | .FxDevice
        _m03 int32_t                                         power_draw_mw;    //{ +0x0020    +0x0020    +0x0020    } | .PowerDrawMw
        _m04 sdk::array<struct po::power_plane_profile_t, 4> dx_power;         //{ +0x0024    +0x0024    +0x0024    } | .DxPower
        _m05 uint64_t                                        component_count;  //{ +0x0048    +0x0048    +0x0048    } | .ComponentCount
        _m06 struct pop::component_power_profile_t**         components;       //{ +0x0050    +0x0050    +0x0050    } | .Components
                                                                             
        SDK_MAGIC_PROPERTIES( "_POP_DEVICE_POWER_PROFILE.$", 0x58, true, 0x2dfaf3f47e6a59b5 );                
        SDK_FIXED_SIZE( device_power_profile_t, 0x58 );                      
    };                                                                       
};
#include "magic/device_power_profile_t.end.hpp"
SDK_VERIFY( struct pop::device_power_profile_t, 0x58 );
