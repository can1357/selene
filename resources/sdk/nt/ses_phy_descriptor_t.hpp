#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_phy_descriptor_t.start.hpp"
namespace nt
{
    // [struct _SES_PHY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct ses_phy_descriptor_t                          
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint3_t                device_type;           //{ +0x0000@4  } | .DeviceType
        _m01 uint1_t                smp_initiator_port;    //{ +0x0002@1  } | .SmpInitiatorPort
        _m02 uint1_t                stp_initiator_port;    //{ +0x0002@2  } | .StpInitiatorPort
        _m03 uint1_t                ssp_initiator_port;    //{ +0x0002@3  } | .SspInitiatorPort
        _m04 uint1_t                sata_device;           //{ +0x0003@0  } | .SataDevice
        _m05 uint1_t                smp_target_port;       //{ +0x0003@1  } | .SmpTargetPort
        _m06 uint1_t                stp_target_port;       //{ +0x0003@2  } | .StpTargetPort
        _m07 uint1_t                ssp_target_port;       //{ +0x0003@3  } | .SspTargetPort
        _m08 uint1_t                sata_port_selector;    //{ +0x0003@7  } | .SataPortSelector
        _m09 sdk::array<uint8_t, 8> attached_sas_address;  //{ +0x0004    } | .AttachedSASAddress
        _m10 sdk::array<uint8_t, 8> sas_address;           //{ +0x000c    } | .SASAddress
        _m11 uint8_t                phy_identifier;        //{ +0x0014    } | .PhyIdentifier
                                                         
        SDK_NONVOL_PROPERTIES( "_SES_PHY_DESCRIPTOR.$", 0x0, false, 0xd07a9f74e430789b );                     
        SDK_FIXED_SIZE( ses_phy_descriptor_t, 0x1c );                     
    };                                                   
};
#include "magic/ses_phy_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::ses_phy_descriptor_t, 0x1c );
