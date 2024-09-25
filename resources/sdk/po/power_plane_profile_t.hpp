#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_plane_profile_t.start.hpp"
namespace po
{
    // [struct _PO_POWER_PLANE_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_plane_profile_t         
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t exclusive_power_mw;  //{ +0x0000    +0x0000    +0x0000    } | .ExclusivePowerMw
        _m01 uint32_t peak_power_mw;       //{ +0x0004    +0x0004    +0x0004    } | .PeakPowerMw
                                         
        SDK_MAGIC_PROPERTIES( "_PO_POWER_PLANE_PROFILE.$", 0x8, true, 0x9c4939fbb1b9b843 );                   
        SDK_FIXED_SIZE( power_plane_profile_t, 0x8 );                   
    };                                   
};
#include "magic/power_plane_profile_t.end.hpp"
SDK_VERIFY( struct po::power_plane_profile_t, 0x8 );
