#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_npem_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_NPEM_STATUS_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_npem_status_register_t        
    {                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  command_completed;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CommandCompleted
        _m01 uint23_t rsvd;                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Rsvd
        _m02 uint8_t  enclosure_specific_status;  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .EnclosureSpecificStatus
        _m03 uint32_t as_ulong;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_NPEM_STATUS_REGISTER.$", 0x4, true, 0x4fc600c60e933b7e );                          
        SDK_FIXED_SIZE( express_npem_status_register_t, 0x4 );                          
    };                                          
};
#include "magic/express_npem_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_npem_status_register_t, 0x4 );
