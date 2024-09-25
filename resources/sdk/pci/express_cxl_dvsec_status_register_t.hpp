#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER]
    // => Windows 11
    //
    union express_cxl_dvsec_status_register_t
    {                                        
        // Windows 11              
        //                         
        _m00 uint1_t  viral_status;            //{ +0x0000@14 } | .ViralStatus
        _m01 uint16_t as_ushort;               //{ +0x0000    } | .AsUSHORT
                                             
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_STATUS_REGISTER.$", 0x0, false, 0x7ce050b107da439d );             
        SDK_FIXED_SIZE( express_cxl_dvsec_status_register_t, 0x2 );             
    };                                       
};
#include "magic/express_cxl_dvsec_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_status_register_t, 0x2 );
