#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_vector_access_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union fpb_vector_access_control_register_t
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint8_t  vector_access_offset;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VectorAccessOffset
        _m01 uint6_t  rsvd0;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Rsvd0
        _m02 uint2_t  vector_select;            //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .VectorSelect
        _m03 uint16_t rsvd1;                    //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd1
        _m04 uint32_t as_ulong;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                              
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER.$", 0x4, true, 0x32e3f4f297aa532c );                     
        SDK_FIXED_SIZE( fpb_vector_access_control_register_t, 0x4 );                     
    };                                        
};
#include "magic/fpb_vector_access_control_register_t.end.hpp"
SDK_VERIFY( union pci::fpb_vector_access_control_register_t, 0x4 );
