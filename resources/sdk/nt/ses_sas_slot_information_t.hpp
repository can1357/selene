#pragma once
#include <sdkgen/support_library.hpp>
#include "ses_phy_descriptor_t.hpp"

#include "magic/ses_sas_slot_information_t.start.hpp"
namespace nt
{
    // [struct _SES_SAS_SLOT_INFORMATION]
    // => WDK 10 (NV)
    //
    struct ses_sas_slot_information_t                                                 
    {                                                                                 
        // WDK 10                                                                     
        //                                                                            
        _m00 uint8_t                                        number_of_phy_descriptors;  //{ +0x0000    } | .NumberOfPhyDescriptors
        _m01 uint1_t                                        not_all_phys;               //{ +0x0001@0  } | .NotAllPhys
        _m02 uint2_t                                        type;                       //{ +0x0001@6  } | .Type
        _m03 uint8_t                                        device_slot_number;         //{ +0x0003    } | .DeviceSlotNumber
        _m04 sdk::array<struct nt::ses_phy_descriptor_t, 1> phy_descriptors;            //{ +0x0004    } | .PhyDescriptors
                                                                                      
        SDK_NONVOL_PROPERTIES( "_SES_SAS_SLOT_INFORMATION.$", 0x0, false, 0x75b06dd03bdecd76 );                          
        SDK_FIXED_SIZE( ses_sas_slot_information_t, 0x20 );                           
    };                                                                                
};
#include "magic/ses_sas_slot_information_t.end.hpp"
SDK_VERIFY( struct nt::ses_sas_slot_information_t, 0x20 );
