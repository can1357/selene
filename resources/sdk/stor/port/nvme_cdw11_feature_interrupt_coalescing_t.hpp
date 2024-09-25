#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_interrupt_coalescing_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_INTERRUPT_COALESCING]
    // => Windows 11
    //
    union nvme_cdw11_feature_interrupt_coalescing_t
    {                                              
        // Windows 11               
        //                          
        _m00 uint8_t  thr;                           //{ +0x0000@0  } | .THR
        _m01 uint8_t  large_integer;                 //{ +0x0000@8  } | .LARGE_INTEGER
        _m02 uint32_t as_ulong;                      //{ +0x0000    } | .AsUlong
                                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_INTERRUPT_COALESCING.$", 0x0, false, 0x12fbf19ef8b6a96e );              
        SDK_FIXED_SIZE( nvme_cdw11_feature_interrupt_coalescing_t, 0x4 );              
    };                                             
};
#include "magic/nvme_cdw11_feature_interrupt_coalescing_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_interrupt_coalescing_t, 0x4 );
