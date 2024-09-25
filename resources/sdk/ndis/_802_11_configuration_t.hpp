#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_configuration_fh_t.hpp"

#include "magic/_802_11_configuration_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_CONFIGURATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_configuration_t                                 
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 uint32_t                                length;         //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                                beacon_period;  //{ +0x0004    +0x0004    +0x0004    } | .BeaconPeriod
        _m02 uint32_t                                atim_window;    //{ +0x0008    +0x0008    +0x0008    } | .ATIMWindow
        _m03 uint32_t                                ds_config;      //{ +0x000c    +0x000c    +0x000c    } | .DSConfig
        _m04 struct ndis::_802_11_configuration_fh_t fh_config;      //{ +0x0010    +0x0010    +0x0010    } | .FHConfig
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_CONFIGURATION.$", 0x20, true, 0x6b4d3850cea2c210 );              
        SDK_FIXED_SIZE( _802_11_configuration_t, 0x20 );              
    };                                                             
};
#include "magic/_802_11_configuration_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_configuration_t, 0x20 );
