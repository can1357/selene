#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hv_dma_domain_info_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_DOMAIN_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hv_dma_domain_info_t 
    {                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t domain_id;  //{ +0x0000    +0x0000    +0x0000    } | .DomainId
        _m01 uint8_t  is_stage1;  //{ +0x0004    +0x0004    +0x0004    } | .IsStage1
                                
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_DOMAIN_INFO.$", 0x8, true, 0xbde8349df178b475 );          
        SDK_FIXED_SIZE( hv_dma_domain_info_t, 0x8 );          
    };                          
};
#include "magic/hv_dma_domain_info_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_domain_info_t, 0x8 );
