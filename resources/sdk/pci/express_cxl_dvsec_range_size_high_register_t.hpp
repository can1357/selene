#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_range_size_high_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER]
    // => Windows 11
    //
    struct express_cxl_dvsec_range_size_high_register_t
    {                                                  
        // Windows 11               
        //                          
        _m00 uint32_t mem_size_high;                     //{ +0x0000    } | .MemSizeHigh
                                                       
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_HIGH_REGISTER.$", 0x0, false, 0x287b936b8218d6b3 );              
        SDK_FIXED_SIZE( express_cxl_dvsec_range_size_high_register_t, 0x4 );              
    };                                                 
};
#include "magic/express_cxl_dvsec_range_size_high_register_t.end.hpp"
SDK_VERIFY( struct pci::express_cxl_dvsec_range_size_high_register_t, 0x4 );
