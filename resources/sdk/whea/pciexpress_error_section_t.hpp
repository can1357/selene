#pragma once
#include <sdkgen/support_library.hpp>
#include "pciexpress_version_t.hpp"
#include "pciexpress_device_id_t.hpp"
#include "pciexpress_device_type_t.hpp"
#include "pciexpress_command_status_t.hpp"
#include "pciexpress_bridge_control_status_t.hpp"
#include "pciexpress_error_section_validbits_t.hpp"

#include "magic/pciexpress_error_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PCIEXPRESS_ERROR_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pciexpress_error_section_t                                               
    {                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                          
        _m00 union whea::pciexpress_error_section_validbits_t valid_bits;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
        _m01 enum whea::pciexpress_device_type_t              port_type;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PortType
        _m02 union whea::pciexpress_version_t                 version;                //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Version
        _m03 union whea::pciexpress_command_status_t          command_status;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CommandStatus
        _m04 struct whea::pciexpress_device_id_t              device_id;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceId
        _m05 uint64_t                                         device_serial_number;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceSerialNumber
        _m06 union whea::pciexpress_bridge_control_status_t   bridge_control_status;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .BridgeControlStatus
        _m07 sdk::array<uint8_t, 60>                          express_capability;     //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .ExpressCapability
        _m08 sdk::array<uint8_t, 96>                          aer_info;               //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .AerInfo
                                                                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIEXPRESS_ERROR_SECTION.$", 0xd0, true, 0xc9ab44d789ad7da0 );                      
        SDK_FIXED_SIZE( pciexpress_error_section_t, 0xd0 );                         
    };                                                                              
};
#include "magic/pciexpress_error_section_t.end.hpp"
SDK_VERIFY( struct whea::pciexpress_error_section_t, 0xd0 );
