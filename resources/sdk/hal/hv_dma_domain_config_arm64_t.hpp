#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hv_dma_domain_config_arm64_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_DOMAIN_CONFIG_ARM64]
    // => Windows 11
    //
    struct hv_dma_domain_config_arm64_t    
    {                                      
        // Windows 11                      
        //                                 
        _m00 int64_t  ttbr0;                 //{ +0x0000    } | .Ttbr0
        _m01 int64_t  ttbr1;                 //{ +0x0008    } | .Ttbr1
        _m02 uint32_t mair0;                 //{ +0x0010    } | .Mair0
        _m03 uint32_t mair1;                 //{ +0x0014    } | .Mair1
        _m04 uint8_t  input_size0;           //{ +0x0018    } | .InputSize0
        _m05 uint8_t  input_size1;           //{ +0x0019    } | .InputSize1
        _m06 uint16_t asid;                  //{ +0x001a    } | .Asid
        _m07 uint8_t  coherent_table_walks;  //{ +0x001c    } | .CoherentTableWalks
        _m08 uint8_t  translation_enabled;   //{ +0x001d    } | .TranslationEnabled
                                           
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_DOMAIN_CONFIG_ARM64.$", 0x0, false, 0x94b958a3908e6374 );                     
        SDK_FIXED_SIZE( hv_dma_domain_config_arm64_t, 0x20 );                     
    };                                     
};
#include "magic/hv_dma_domain_config_arm64_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_domain_config_arm64_t, 0x20 );
