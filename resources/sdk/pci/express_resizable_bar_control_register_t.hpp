#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_resizable_bar_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_resizable_bar_control_register_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m00 uint3_t   bar_index;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BarIndex
        _m01 uint2_t   rsvd;                        //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m02 uint3_t   number_of_resizable_bars;    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .NumberOfResizableBars
        _m03 varuint_t bar_size;                    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .BarSize
        _m04 varuint_t rsvd2;                       //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@14 +0x0000@13 } | .Rsvd2
        _m05 uint32_t  as_ulong;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER.$", 0x4, true, 0xb54be1dd5f24794f );                         
        SDK_FIXED_SIZE( express_resizable_bar_control_register_t, 0x4 );                         
    };                                            
};
#include "magic/express_resizable_bar_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_resizable_bar_control_register_t, 0x4 );
