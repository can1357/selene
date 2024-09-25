#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_idle_power_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_IDLE_POWER]
    // => WDK 10 (NV)
    //
    struct storage_idle_power_t         
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t version;            //{ +0x0000    } | .Version
        _m01 uint32_t size;               //{ +0x0004    } | .Size
        _m02 uint1_t  wake_capable_hint;  //{ +0x0008@0  } | .WakeCapableHint
        _m03 uint1_t  d3_cold_supported;  //{ +0x0008@1  } | .D3ColdSupported
        _m04 uint32_t d3_idle_timeout;    //{ +0x000c    } | .D3IdleTimeout
                                        
        SDK_NONVOL_PROPERTIES( "_STORAGE_IDLE_POWER.$", 0x0, false, 0x4e736cb1299df266 );                  
        SDK_FIXED_SIZE( storage_idle_power_t, 0x10 );                  
    };                                  
};
#include "magic/storage_idle_power_t.end.hpp"
SDK_VERIFY( struct nt::storage_idle_power_t, 0x10 );
