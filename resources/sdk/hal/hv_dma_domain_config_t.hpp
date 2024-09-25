#pragma once
#include <sdkgen/support_library.hpp>
#include "hv_dma_domain_config_x64_t.hpp"
#include "hv_dma_domain_config_arch_t.hpp"
#include "hv_dma_domain_config_arm64_t.hpp"

#include "magic/hv_dma_domain_config_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_DOMAIN_CONFIG]
    // => Windows 11
    //
    struct hv_dma_domain_config_t                           
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 enum hal::hv_dma_domain_config_arch_t    type;   //{ +0x0000    } | .Type
        _m01 struct hal::hv_dma_domain_config_arm64_t arm64;  //{ +0x0008    } | .Arm64
        _m02 struct hal::hv_dma_domain_config_x64_t   x64;    //{ +0x0008    } | .X64
                                                            
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_DOMAIN_CONFIG.$", 0x0, false, 0xc4d4d85f772791d7 );      
        SDK_FIXED_SIZE( hv_dma_domain_config_t, 0x28 );      
    };                                                      
};
#include "magic/hv_dma_domain_config_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_domain_config_t, 0x28 );
