#pragma once
#include <sdkgen/support_library.hpp>
#include "pci_slot_number_t.hpp"
#include "../nt/aer_bridge_descriptor_flags_t.hpp"

#include "magic/aer_bridge_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_AER_BRIDGE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct aer_bridge_descriptor_t                                                      
    {                                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                              
        _m00 uint16_t                                type;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                 enabled;                             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Enabled
        _m02 uint32_t                                bus_number;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BusNumber
        _m03 struct whea::pci_slot_number_t          slot;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Slot
        _m04 uint16_t                                device_control;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DeviceControl
        _m05 union nt::aer_bridge_descriptor_flags_t flags;                               //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Flags
        _m06 uint32_t                                uncorrectable_error_mask;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UncorrectableErrorMask
        _m07 uint32_t                                uncorrectable_error_severity;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .UncorrectableErrorSeverity
        _m08 uint32_t                                correctable_error_mask;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CorrectableErrorMask
        _m09 uint32_t                                advanced_caps_and_control;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .AdvancedCapsAndControl
        _m10 uint32_t                                secondary_uncorrectable_error_mask;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SecondaryUncorrectableErrorMask
        _m11 uint32_t                                secondary_uncorrectable_error_sev;   //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .SecondaryUncorrectableErrorSev
        _m12 uint32_t                                secondary_caps_and_control;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SecondaryCapsAndControl
                                                                                        
        SDK_NONVOL_PROPERTIES( "_WHEA_AER_BRIDGE_DESCRIPTOR.$", 0x2c, true, 0x8aa6a32337b525cd );                                   
        SDK_FIXED_SIZE( aer_bridge_descriptor_t, 0x2c );                                   
    };                                                                                  
};
#include "magic/aer_bridge_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::aer_bridge_descriptor_t, 0x2c );
