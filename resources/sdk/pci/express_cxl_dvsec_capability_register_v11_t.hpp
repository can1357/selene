#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_capability_register_v11_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11]
    // => Windows 11
    //
    union express_cxl_dvsec_capability_register_v11_t
    {                                                
        // Windows 11                  
        //                             
        _m00 uint1_t  cache_capable;                   //{ +0x0000@0  } | .CacheCapable
        _m01 uint1_t  io_capable;                      //{ +0x0000@1  } | .IoCapable
        _m02 uint1_t  mem_capable;                     //{ +0x0000@2  } | .MemCapable
        _m03 uint1_t  mem_hw_init_mode;                //{ +0x0000@3  } | .MemHwInitMode
        _m04 uint2_t  hdm_count;                       //{ +0x0000@4  } | .HdmCount
        _m05 uint1_t  viral_capable;                   //{ +0x0000@14 } | .ViralCapable
        _m06 uint16_t as_ushort;                       //{ +0x0000    } | .AsUSHORT
                                                     
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_CAPABILITY_REGISTER_V11.$", 0x0, false, 0xc87857a168841701 );                 
        SDK_FIXED_SIZE( express_cxl_dvsec_capability_register_v11_t, 0x2 );                 
    };                                               
};
#include "magic/express_cxl_dvsec_capability_register_v11_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_capability_register_v11_t, 0x2 );
