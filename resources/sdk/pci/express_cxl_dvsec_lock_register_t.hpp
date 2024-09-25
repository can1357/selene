#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_lock_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER]
    // => Windows 11
    //
    union express_cxl_dvsec_lock_register_t
    {                                      
        // Windows 11             
        //                        
        _m00 uint1_t  config_lock;           //{ +0x0000@0  } | .ConfigLock
        _m01 uint16_t as_ushort;             //{ +0x0000    } | .AsUSHORT
                                           
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER.$", 0x0, false, 0x61d2fe59538528e4 );            
        SDK_FIXED_SIZE( express_cxl_dvsec_lock_register_t, 0x2 );            
    };                                     
};
#include "magic/express_cxl_dvsec_lock_register_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_lock_register_t, 0x2 );
