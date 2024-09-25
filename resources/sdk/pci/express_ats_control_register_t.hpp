#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_ats_control_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ATS_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_ats_control_register_t       
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint5_t  smallest_transaction_unit;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SmallestTransactionUnit
        _m01 uint1_t  enable;                     //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .Enable
                                                
        // Windows 11                           
        //                                      
        _m02 uint16_t as_ushort;                  //{ +0x0000    } | .AsUSHORT
                                                
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ATS_CONTROL_REGISTER.$", 0x2, true, 0xe00da26aa7433be7 );                          
        SDK_FIXED_SIZE( express_ats_control_register_t, 0x2 );                          
    };                                          
};
#include "magic/express_ats_control_register_t.end.hpp"
SDK_VERIFY( struct pci::express_ats_control_register_t, 0x2 );
