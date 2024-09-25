#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_interrupt_vector_config_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG]
    // => Windows 11
    //
    union nvme_cdw11_feature_interrupt_vector_config_t
    {                                                 
        // Windows 11          
        //                     
        _m00 uint16_t iv;                               //{ +0x0000@0  } | .IV
        _m01 uint1_t  cd;                               //{ +0x0000@16 } | .CD
        _m02 uint32_t as_ulong;                         //{ +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_INTERRUPT_VECTOR_CONFIG.$", 0x0, false, 0xcf7deb70a5dd98cf );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_interrupt_vector_config_t, 0x4 );         
    };                                                
};
#include "magic/nvme_cdw11_feature_interrupt_vector_config_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_interrupt_vector_config_t, 0x4 );
