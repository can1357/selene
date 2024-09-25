#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_mem_high_vector_control1_register_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union fpb_mem_high_vector_control1_register_t      
    {                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint1_t  mem_high_decode_mechanism_enable;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MemHighDecodeMechanismEnable
        _m01 uint3_t  rsvd0;                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd0
        _m02 uint4_t  mem_high_vector_granularity;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .MemHighVectorGranularity
        _m03 uint20_t rsvd1;                             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Rsvd1
        _m04 uint4_t  mem_high_vector_start_lower;       //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .MemHighVectorStartLower
        _m05 uint32_t as_ulong;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                       
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER.$", 0x4, true, 0xc4a87ae7c14b117f );                                 
        SDK_FIXED_SIZE( fpb_mem_high_vector_control1_register_t, 0x4 );                                 
    };                                                 
};
#include "magic/fpb_mem_high_vector_control1_register_t.end.hpp"
SDK_VERIFY( union pci::fpb_mem_high_vector_control1_register_t, 0x4 );
