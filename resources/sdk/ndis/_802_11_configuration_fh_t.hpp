#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/_802_11_configuration_fh_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_CONFIGURATION_FH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_configuration_fh_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t length;          //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t hop_pattern;     //{ +0x0004    +0x0004    +0x0004    } | .HopPattern
        _m02 uint32_t hop_set;         //{ +0x0008    +0x0008    +0x0008    } | .HopSet
        _m03 uint32_t dwell_time;      //{ +0x000c    +0x000c    +0x000c    } | .DwellTime
                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_CONFIGURATION_FH.$", 0x10, true, 0x95afa95121b05470 );            
        SDK_FIXED_SIZE( _802_11_configuration_fh_t, 0x10 );            
    };                               
};
#include "magic/_802_11_configuration_fh_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_configuration_fh_t, 0x10 );
