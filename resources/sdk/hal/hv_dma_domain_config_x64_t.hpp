#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hv_dma_domain_config_x64_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_DMA_DOMAIN_CONFIG_X64]
    // => Windows 11
    //
    struct hv_dma_domain_config_x64_t            
    {                                            
        // Windows 11                            
        //                                       
        _m00 int64_t first_level_page_table_root;  //{ +0x0000    } | .FirstLevelPageTableRoot
        _m01 uint8_t translation_enabled;          //{ +0x0008    } | .TranslationEnabled
                                                 
        SDK_MAGIC_PROPERTIES( "_HAL_HV_DMA_DOMAIN_CONFIG_X64.$", 0x0, false, 0x424331c41c917c84 );                            
        SDK_FIXED_SIZE( hv_dma_domain_config_x64_t, 0x10 );                            
    };                                           
};
#include "magic/hv_dma_domain_config_x64_t.end.hpp"
SDK_VERIFY( struct hal::hv_dma_domain_config_x64_t, 0x10 );
