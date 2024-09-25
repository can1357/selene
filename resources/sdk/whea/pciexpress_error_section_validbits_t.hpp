#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pciexpress_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pciexpress_error_section_validbits_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint1_t  port_type;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PortType
        _m01 uint1_t  version;                  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Version
        _m02 uint1_t  command_status;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CommandStatus
        _m03 uint1_t  device_id;                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DeviceId
        _m04 uint1_t  device_serial_number;     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DeviceSerialNumber
        _m05 uint1_t  bridge_control_status;    //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .BridgeControlStatus
        _m06 uint1_t  express_capability;       //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .ExpressCapability
        _m07 uint1_t  aer_info;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .AerInfo
        _m08 uint64_t valid_bits;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0x9bb38d743c4dfafd );                      
        SDK_FIXED_SIZE( pciexpress_error_section_validbits_t, 0x8 );                      
    };                                        
};
#include "magic/pciexpress_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::pciexpress_error_section_validbits_t, 0x8 );
