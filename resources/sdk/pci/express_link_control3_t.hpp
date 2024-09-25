#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_link_control3_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_LINK_CONTROL3]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_link_control3_t   
    {                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint1_t  perform_eq;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PerformEq
        _m01 uint1_t  link_eq_int_en;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .LinkEqIntEn
        _m02 uint32_t as_ulong;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_LINK_CONTROL3.$", 0x4, true, 0x9495f378af12c8e6 );               
        SDK_FIXED_SIZE( express_link_control3_t, 0x4 );               
    };                               
};
#include "magic/express_link_control3_t.end.hpp"
SDK_VERIFY( struct pci::express_link_control3_t, 0x4 );
