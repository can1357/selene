#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pci_slot_number_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCI_SLOT_NUMBER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pci_slot_number_t                      
    {                                             
        struct u0_bits_t                          
        {                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                    
            _m00 uint5_t device_number;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceNumber
            _m01 uint3_t function_number;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .FunctionNumber
                                                  
            SDK_NONVOL_PROPERTIES( "_WHEA_PCI_SLOT_NUMBER.bits.$", 0x4, true, 0x2e914bca438710fa );                         
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                         
        };                                        
                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                        
        _m02 u0_bits_t                   bits;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .bits
        _m03 uint32_t                    as_ulong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                  
        SDK_NONVOL_PROPERTIES( "_WHEA_PCI_SLOT_NUMBER.$", 0x4, true, 0x7b93d9f014c36898 );         
        SDK_FIXED_SIZE( pci_slot_number_t, 0x4 );         
    };                                            
};
#include "magic/pci_slot_number_t.end.hpp"
SDK_VERIFY( struct whea::pci_slot_number_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct whea::pci_slot_number_t, 0x4 );
