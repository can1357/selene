#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pci_device_custom_properties_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pci_device_custom_properties_t                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     device_type;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceType
        _m02 uint32_t                     current_speed_and_mode;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentSpeedAndMode
        _m03 uint32_t                     current_payload_size;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentPayloadSize
        _m04 uint32_t                     max_payload_size;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxPayloadSize
        _m05 uint32_t                     max_read_request_size;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxReadRequestSize
        _m06 uint32_t                     current_link_speed;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentLinkSpeed
        _m07 uint32_t                     current_link_width;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CurrentLinkWidth
        _m08 uint32_t                     max_link_speed;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxLinkSpeed
        _m09 uint32_t                     max_link_width;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxLinkWidth
        _m10 uint32_t                     pci_express_version;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PciExpressVersion
        _m11 uint32_t                     interrupt_type;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .InterruptType
        _m12 uint32_t                     max_interrupt_messages;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxInterruptMessages
                                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_PCI_DEVICE_CUSTOM_PROPERTIES.$", 0x34, true, 0xb13ab53a46b00fb5 );                       
        SDK_FIXED_SIZE( pci_device_custom_properties_t, 0x34 );                       
    };                                                           
};
#include "magic/pci_device_custom_properties_t.end.hpp"
SDK_VERIFY( struct ndis::pci_device_custom_properties_t, 0x34 );
