#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_capability_support_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_CAPABILITY_SUPPORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fpb_capability_support_t                        
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint1_t  rid_decode_mechanism_enable;          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .RidDecodeMechanismEnable
        _m01 uint1_t  mem_low_decode_mechanism_enable;      //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .MemLowDecodeMechanismEnable
        _m02 uint1_t  mem_high_decode_mechanism_enable;     //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .MemHighDecodeMechanismEnable
        _m03 uint1_t  rsvd0;                                //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd0
        _m04 uint4_t  rid_vector_granularity_logical;       //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .RidVectorGranularityLogical
        _m05 uint4_t  rid_vector_granularity_actual;        //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .RidVectorGranularityActual
        _m06 uint4_t  mem_low_vector_granularity_logical;   //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .MemLowVectorGranularityLogical
        _m07 uint4_t  mem_low_vector_granularity_actual;    //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .MemLowVectorGranularityActual
        _m08 uint4_t  mem_high_vector_granularity_logical;  //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .MemHighVectorGranularityLogical
        _m09 uint4_t  mem_high_vector_granularity_actual;   //{ +0x0000@24 +0x0000@24 +0x0000@24 } | .MemHighVectorGranularityActual
        _m10 uint4_t  rsvd1;                                //{ +0x0000@28 +0x0000@28 +0x0000@28 } | .Rsvd1
        _m11 uint32_t as_ulong;                             //{ +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                          
        SDK_MAGIC_PROPERTIES( "_PCI_FPB_CAPABILITY_SUPPORT.$", 0x4, true, 0x65d88b2317bc126b );                                    
        SDK_FIXED_SIZE( fpb_capability_support_t, 0x4 );                                    
    };                                                    
};
#include "magic/fpb_capability_support_t.end.hpp"
SDK_VERIFY( union pci::fpb_capability_support_t, 0x4 );
