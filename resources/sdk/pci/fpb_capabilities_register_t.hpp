#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union fpb_capabilities_register_t                     
    {                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint1_t  rid_decode_mechanism_supported;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RidDecodeMechanismSupported
        _m01 uint1_t  mem_low_decode_mechanism_supported;   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .MemLowDecodeMechanismSupported
        _m02 uint1_t  mem_high_decode_mechanism_supported;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MemHighDecodeMechanismSupported
        _m03 uint5_t  num_sec_dev;                          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .NumSecDev
        _m04 uint3_t  rid_vector_size_supported;            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RidVectorSizeSupported
        _m05 uint5_t  rsvd0;                                //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Rsvd0
        _m06 uint3_t  mem_low_vector_size_supported;        //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .MemLowVectorSizeSupported
        _m07 uint5_t  rsvd1;                                //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .Rsvd1
        _m08 uint3_t  mem_high_vector_size_supported;       //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .MemHighVectorSizeSupported
        _m09 uint5_t  rsvd2;                                //{ +0x0000@27 +0x0000@27 +0x0000@27 +0x0000@27 } | .Rsvd2
        _m10 uint32_t as_ulong;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                          
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_CAPABILITIES_REGISTER.$", 0x4, true, 0xff2c584bed8c142e );                                    
        SDK_FIXED_SIZE( fpb_capabilities_register_t, 0x4 );                                    
    };                                                    
};
#include "magic/fpb_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::fpb_capabilities_register_t, 0x4 );
