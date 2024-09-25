#pragma once
#include <sdkgen/support_library.hpp>
#include "hv_dma_domain_info_t.hpp"

#include "magic/hv_dma_create_domain_info_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_CREATE_DOMAIN_INFO]
    // => Windows 11
    //
    struct hv_dma_create_domain_info_t                                   
    {                                                                    
        // Windows 11                                                    
        //                                                               
        _m00 struct hal::hv_dma_domain_info_t domain_info;                 //{ +0x0000    } | .DomainInfo
        _m01 uint8_t                          inherit_passthrough_domain;  //{ +0x0008    } | .InheritPassthroughDomain
        _m02 uint8_t                          forward_progress_required;   //{ +0x0009    } | .ForwardProgressRequired
                                                                         
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_CREATE_DOMAIN_INFO.$", 0x0, false, 0x2056164c7b5e5699 );                           
        SDK_FIXED_SIZE( hv_dma_create_domain_info_t, 0xc );                           
    };                                                                   
};
#include "magic/hv_dma_create_domain_info_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_create_domain_info_t, 0xc );
