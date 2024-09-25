#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msix_table_entry_t.start.hpp"
namespace pci
{
    // [struct PCI_MSIX_TABLE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msix_table_entry_t                     
    {                                             
        struct u0_vector_control_t                
        {                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                    
            _m02 uint1_t mask;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Mask
            _m03 uint8_t st_lower;                  //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .StLower
            _m04 uint8_t st_upper;                  //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .StUpper
                                                  
            SDK_MAGIC_PROPERTIES( "PCI_MSIX_TABLE_ENTRY.VectorControl.$", 0x4, true, 0xbed407f9fa2eff60 );                         
            SDK_FIXED_SIZE( u0_vector_control_t, 0x4 );                         
        };                                        
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                        
        _m00 int64_t              message_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageAddress
        _m01 uint32_t             message_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageData
        _m05 u0_vector_control_t  vector_control;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .VectorControl
                                                  
        SDK_MAGIC_PROPERTIES( "PCI_MSIX_TABLE_ENTRY.$", 0x10, true, 0x13daec59bf32b5a1 );                
        SDK_FIXED_SIZE( msix_table_entry_t, 0x10 );                
    };                                            
};
#include "magic/msix_table_entry_t.end.hpp"
SDK_VERIFY( struct pci::msix_table_entry_t::u0_vector_control_t, 0x4 );
SDK_VERIFY( struct pci::msix_table_entry_t, 0x10 );
