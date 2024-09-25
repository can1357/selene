#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"
#include "../ndis/msix_table_pointer_t.hpp"

#include "magic/msix_capability_t.start.hpp"
namespace pci
{
    // [struct PCI_MSIX_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msix_capability_t                                   
    {                                                          
        struct u0_message_control_t                            
        {                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                 
            _m01 uint11_t table_size;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TableSize
            _m02 uint1_t  function_mask;                         //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .FunctionMask
            _m03 uint1_t  msix_enable;                           //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .MSIXEnable
                                                               
            SDK_MAGIC_PROPERTIES( "PCI_MSIX_CAPABILITY.MessageControl.$", 0x2, true, 0xf10617fbafc75a5f );                              
            SDK_FIXED_SIZE( u0_message_control_t, 0x2 );                              
        };                                                     
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 struct pci::capabilities_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m04 u0_message_control_t              message_control;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MessageControl
        _m05 struct ndis::msix_table_pointer_t message_table;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessageTable
        _m06 struct ndis::msix_table_pointer_t pba_table;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PBATable
                                                               
        SDK_MAGIC_PROPERTIES( "PCI_MSIX_CAPABILITY.$", 0xc, true, 0x53c765ed2a6161e9 );                
        SDK_FIXED_SIZE( msix_capability_t, 0xc );                
    };                                                         
};
#include "magic/msix_capability_t.end.hpp"
SDK_VERIFY( struct pci::msix_capability_t::u0_message_control_t, 0x2 );
SDK_VERIFY( struct pci::msix_capability_t, 0xc );
