#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dma_guard_policy_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DMA_GUARD_POLICY_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_dma_guard_policy_information_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                    
        _m00 uint8_t dma_guard_policy_enabled;    //{ +0x0000    +0x0000    +0x0000    } | .DmaGuardPolicyEnabled
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DMA_GUARD_POLICY_INFORMATION.$", 0x1, true, 0xae55b0bc6cfb1843 );                         
        SDK_FIXED_SIZE( system_dma_guard_policy_information_t, 0x1 );                         
    };                                          
};
#include "magic/system_dma_guard_policy_information_t.end.hpp"
SDK_VERIFY( struct win::system_dma_guard_policy_information_t, 0x1 );
