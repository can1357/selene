#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_cxl_dvsec_range_size_low_register_v11_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11]
    // => Windows 11
    //
    union express_cxl_dvsec_range_size_low_register_v11_t
    {                                                    
        // Windows 11                    
        //                               
        _m00 uint1_t  mem_info_valid;                      //{ +0x0000@0  } | .MemInfoValid
        _m01 uint1_t  mem_active;                          //{ +0x0000@1  } | .MemActive
        _m02 uint3_t  media_type;                          //{ +0x0000@2  } | .MediaType
        _m03 uint3_t  mem_class;                           //{ +0x0000@5  } | .MemClass
        _m04 uint3_t  desired_interleave;                  //{ +0x0000@8  } | .DesiredInterleave
        _m05 uint4_t  mem_size_low;                        //{ +0x0000@28 } | .MemSizeLow
        _m06 uint32_t as_ulong;                            //{ +0x0000    } | .AsULONG
                                                         
        SDK_MAGIC_PROPERTIES( "_PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11.$", 0x0, false, 0xcf03f9a9c51b71bb );                   
        SDK_FIXED_SIZE( express_cxl_dvsec_range_size_low_register_v11_t, 0x4 );                   
    };                                                   
};
#include "magic/express_cxl_dvsec_range_size_low_register_v11_t.end.hpp"
SDK_VERIFY( union pci::express_cxl_dvsec_range_size_low_register_v11_t, 0x4 );
