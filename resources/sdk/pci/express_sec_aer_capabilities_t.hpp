#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_sec_aer_capabilities_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SEC_AER_CAPABILITIES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_sec_aer_capabilities_t                      
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                    
        _m00 uint5_t  secondary_uncorrectable_first_error_ptr;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SecondaryUncorrectableFirstErrorPtr
        _m01 uint32_t as_ulong;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SEC_AER_CAPABILITIES.$", 0x4, true, 0xdd4bce47e44cc63a );                                        
        SDK_FIXED_SIZE( express_sec_aer_capabilities_t, 0x4 );                                        
    };                                                        
};
#include "magic/express_sec_aer_capabilities_t.end.hpp"
SDK_VERIFY( union pci::express_sec_aer_capabilities_t, 0x4 );
