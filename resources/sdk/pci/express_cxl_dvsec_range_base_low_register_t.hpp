#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_range_base_low_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER]
    // => Windows 11
    //
    union express_cxl_dvsec_range_base_low_register_t
    {                                                
        // Windows 11              
        //                         
        _m00 uint4_t  mem_base_low;                    //{ +0x0000@28 } | .MemBaseLow
        _m01 uint32_t as_ulong;                        //{ +0x0000    } | .AsULONG
                                                     
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_LOW_REGISTER.$", 0x0, false, 0x6aa4137fc8fb59fb );             
        SDK_FIXED_SIZE( express_cxl_dvsec_range_base_low_register_t, 0x4 );             
    };                                               
};
#include "magic/express_cxl_dvsec_range_base_low_register_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_range_base_low_register_t, 0x4 );
