#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_rid_vector_control1_register_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union fpb_rid_vector_control1_register_t      
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint1_t  rid_decode_mechanism_enable;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RidDecodeMechanismEnable
        _m01 uint3_t  rsvd0;                        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd0
        _m02 uint4_t  rid_vector_granularity;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .RidVectorGranularity
        _m03 uint11_t rsvd1;                        //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Rsvd1
        _m04 uint13_t rid_vector_start;             //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .RidVectorStart
        _m05 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_RID_VECTOR_CONTROL1_REGISTER.$", 0x4, true, 0x255b4e5606e9d49b );                            
        SDK_FIXED_SIZE( fpb_rid_vector_control1_register_t, 0x4 );                            
    };                                            
};
#include "magic/fpb_rid_vector_control1_register_t.end.hpp"
SDK_VERIFY( union pci::fpb_rid_vector_control1_register_t, 0x4 );
