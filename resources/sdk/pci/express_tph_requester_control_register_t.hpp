#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_tph_requester_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_tph_requester_control_register_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint3_t  st_mode_select;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .StModeSelect
        _m01 uint5_t  rsvd;                         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Rsvd
        _m02 uint2_t  tph_requester_enable;         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .TphRequesterEnable
        _m03 uint22_t rsvd2;                        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Rsvd2
        _m04 uint32_t as_ulong;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_TPH_REQUESTER_CONTROL_REGISTER.$", 0x4, true, 0xe82bae7771303243 );                     
        SDK_FIXED_SIZE( express_tph_requester_control_register_t, 0x4 );                     
    };                                            
};
#include "magic/express_tph_requester_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_tph_requester_control_register_t, 0x4 );
