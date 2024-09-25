#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpb_rid_vector_control2_register_t.start.hpp"
namespace pci
{
    // [union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union fpb_rid_vector_control2_register_t
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint3_t  rsvd0;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd0
        _m01 uint13_t rid_secondary_start;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .RidSecondaryStart
        _m02 uint16_t rsvd1;                  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Rsvd1
        _m03 uint32_t as_ulong;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                            
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_RID_VECTOR_CONTROL2_REGISTER.$", 0x4, true, 0x9f094986fb1b1592 );                    
        SDK_FIXED_SIZE( fpb_rid_vector_control2_register_t, 0x4 );                    
    };                                      
};
#include "magic/fpb_rid_vector_control2_register_t.end.hpp"
SDK_VERIFY( union pci::fpb_rid_vector_control2_register_t, 0x4 );
