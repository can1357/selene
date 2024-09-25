#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_type_t.hpp"
#include "../nt/interrupt_vector_data_t.hpp"

namespace nt { struct interrupt_connection_data_t; }

#include "magic/device_interrupt_resource_t.start.hpp"
namespace pci
{
    struct msix_table_entry_t;

    // [struct _PCI_DEVICE_INTERRUPT_RESOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_interrupt_resource_t                                                     
    {                                                                                      
        struct u0_msi_t                                                                    
        {                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                             
            _m03 uint8_t                            granted_bits;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GrantedBits
            _m04 struct nt::interrupt_vector_data_t connection_data;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectionData
                                                                                           
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_INTERRUPT_RESOURCE.Msi.$", 0x60, true, 0x93a3bf6b34fb8e63 );                                 
            SDK_FIXED_SIZE( u0_msi_t, 0x60 );                                              
        };                                                                                 
                                                                                           
        struct u4_msi_x_t                                                                  
        {                                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                                             
            _m06 uint8_t                                 bar_index;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BARIndex
            _m07 uint32_t                                table_offset;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TableOffset
            _m08 struct pci::msix_table_entry_t*         table;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Table
            _m09 uint32_t                                messages_granted;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MessagesGranted
            _m10 uint32_t*                               entry_map;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EntryMap
            _m11 struct nt::interrupt_connection_data_t* connection_data;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ConnectionData
                                                                                           
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_INTERRUPT_RESOURCE.MsiX.$", 0x28, true, 0x31654beae23d4989 );                                  
            SDK_FIXED_SIZE( u4_msi_x_t, 0x28 );                                            
        };                                                                                 
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                                 
        _m00 enum pci::interrupt_type_t                                   type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                                      interrupt_line;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterruptLine
        _m02 uint8_t                                                      policy_specified;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .PolicySpecified
        _m05 u0_msi_t                                                     msi;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Msi
        _m12 u4_msi_x_t                                                   msi_x;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MsiX
                                                                                           
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_INTERRUPT_RESOURCE.$", 0x68, true, 0xdc3f757a6825f38c );                 
        SDK_FIXED_SIZE( device_interrupt_resource_t, 0x68 );                               
    };                                                                                     
};
#include "magic/device_interrupt_resource_t.end.hpp"
SDK_VERIFY( struct pci::device_interrupt_resource_t::u0_msi_t, 0x60 );
SDK_VERIFY( struct pci::device_interrupt_resource_t::u4_msi_x_t, 0x28 );
SDK_VERIFY( struct pci::device_interrupt_resource_t, 0x68 );
