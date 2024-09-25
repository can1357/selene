#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../po/power_plane_profile_t.hpp"

#include "magic/component_power_profile_t.start.hpp"
namespace pop
{
    struct device_power_profile_t;

    // [struct _POP_COMPONENT_POWER_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct component_power_profile_t                                        
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m00 struct nt::guid_t                               component_guid;  //{ +0x0000    +0x0000    +0x0000    } | .ComponentGuid
        _m01 struct pop::device_power_profile_t*             device;          //{ +0x0010    +0x0010    +0x0010    } | .Device
        _m02 uint64_t                                        fx_count;        //{ +0x0018    +0x0018    +0x0018    } | .FxCount
        _m03 sdk::array<struct po::power_plane_profile_t, 1> fx_power;        //{ +0x0020    +0x0020    +0x0020    } | .FxPower
                                                                            
        SDK_MAGIC_PROPERTIES( "_POP_COMPONENT_POWER_PROFILE.$", 0x28, true, 0x20a858f5df934cbc );               
        SDK_FIXED_SIZE( component_power_profile_t, 0x28 );                  
    };                                                                      
};
#include "magic/component_power_profile_t.end.hpp"
SDK_VERIFY( struct pop::component_power_profile_t, 0x28 );
