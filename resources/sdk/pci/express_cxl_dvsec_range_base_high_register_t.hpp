#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_range_base_high_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER]
    // => Windows 11
    //
    struct express_cxl_dvsec_range_base_high_register_t
    {                                                  
        // Windows 11               
        //                          
        _m00 uint32_t mem_base_high;                     //{ +0x0000    } | .MemBaseHigh
                                                       
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_RANGE_BASE_HIGH_REGISTER.$", 0x0, false, 0xcb15118590a402e6 );              
        SDK_FIXED_SIZE( express_cxl_dvsec_range_base_high_register_t, 0x4 );              
    };                                                 
};
#include "magic/express_cxl_dvsec_range_base_high_register_t.end.hpp"
SDK_VERIFY( struct pci::express_cxl_dvsec_range_base_high_register_t, 0x4 );
