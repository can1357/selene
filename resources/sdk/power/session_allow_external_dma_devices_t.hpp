#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_allow_external_dma_devices_t.start.hpp"
namespace power
{
    // [struct _POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_allow_external_dma_devices_t
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t is_allowed;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IsAllowed
                                               
        SDK_NONVOL_PROPERTIES( "_POWER_SESSION_ALLOW_EXTERNAL_DMA_DEVICES.$", 0x1, true, 0xd4e555bc26080a3 );           
        SDK_FIXED_SIZE( session_allow_external_dma_devices_t, 0x1 );           
    };                                         
};
#include "magic/session_allow_external_dma_devices_t.end.hpp"
SDK_VERIFY( struct power::session_allow_external_dma_devices_t, 0x1 );
