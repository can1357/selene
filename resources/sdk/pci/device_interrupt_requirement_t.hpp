#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_type_t.hpp"
#include "../io/resource_descriptor_t.hpp"

#include "magic/device_interrupt_requirement_t.start.hpp"
namespace pci
{
    // [struct _PCI_DEVICE_INTERRUPT_REQUIREMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_interrupt_requirement_t                                       
    {                                                                           
        struct u0_message_t                                                     
        {                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                                  
            _m01 enum pci::interrupt_type_t       type;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
            _m02 uint32_t                         messages_requested;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MessagesRequested
            _m03 struct io::resource_descriptor_t single_message;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SingleMessage
                                                                                
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_INTERRUPT_REQUIREMENT.Message.$", 0x28, true, 0x9a8ce3df2771ef0e );                              
            SDK_FIXED_SIZE( u0_message_t, 0x28 );                               
        };                                                                      
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                                      
        _m00 struct io::resource_descriptor_t                        line_based;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LineBased
        _m04 u0_message_t                                            message;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Message
                                                                                
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_INTERRUPT_REQUIREMENT.$", 0x48, true, 0x77705053fa76a968 );           
        SDK_FIXED_SIZE( device_interrupt_requirement_t, 0x48 );                 
    };                                                                          
};
#include "magic/device_interrupt_requirement_t.end.hpp"
SDK_VERIFY( struct pci::device_interrupt_requirement_t::u0_message_t, 0x28 );
SDK_VERIFY( struct pci::device_interrupt_requirement_t, 0x48 );
