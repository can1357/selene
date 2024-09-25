#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_resizable_bar_capability_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_resizable_bar_capability_register_t
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint4_t  rsvd;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd
        _m01 uint20_t sizes_supported;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .SizesSupported
        _m02 uint8_t  rsvd2;                           //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Rsvd2
        _m03 uint32_t as_ulong;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER.$", 0x4, true, 0xc9d1cd92deef5789 );                
        SDK_FIXED_SIZE( express_resizable_bar_capability_register_t, 0x4 );                
    };                                               
};
#include "magic/express_resizable_bar_capability_register_t.end.hpp"
SDK_VERIFY( union pci::express_resizable_bar_capability_register_t, 0x4 );
