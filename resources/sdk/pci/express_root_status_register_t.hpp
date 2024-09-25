#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_ROOT_STATUS_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_root_status_register_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint16_t pme_requestor_id;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PMERequestorId
        _m01 uint1_t  pme_status;         //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .PMEStatus
        _m02 uint1_t  pme_pending;        //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .PMEPending
        _m03 uint14_t rsvd;               //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .Rsvd
        _m04 uint32_t as_ulong;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                        
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_STATUS_REGISTER.$", 0x4, true, 0x11d843865b71882f );                 
        SDK_FIXED_SIZE( express_root_status_register_t, 0x4 );                 
    };                                  
};
#include "magic/express_root_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_root_status_register_t, 0x4 );
