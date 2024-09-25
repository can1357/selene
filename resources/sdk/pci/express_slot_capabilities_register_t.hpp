#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_slot_capabilities_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_slot_capabilities_register_t       
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  attention_button_present;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AttentionButtonPresent
        _m01 uint1_t  power_controller_present;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerControllerPresent
        _m02 uint1_t  mrl_sensor_present;              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MRLSensorPresent
        _m03 uint1_t  attention_indicator_present;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AttentionIndicatorPresent
        _m04 uint1_t  power_indicator_present;         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PowerIndicatorPresent
        _m05 uint1_t  hot_plug_surprise;               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HotPlugSurprise
        _m06 uint1_t  hot_plug_capable;                //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .HotPlugCapable
        _m07 uint8_t  slot_power_limit;                //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .SlotPowerLimit
        _m08 uint2_t  slot_power_limit_scale;          //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .SlotPowerLimitScale
        _m09 uint1_t  electromechanical_lock_present;  //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ElectromechanicalLockPresent
        _m10 uint1_t  no_command_completed_support;    //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .NoCommandCompletedSupport
        _m11 uint13_t physical_slot_number;            //{ +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 +0x0000@19 } | .PhysicalSlotNumber
        _m12 uint32_t as_ulong;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.$", 0x4, true, 0xd6a9600532b944aa );                               
        SDK_FIXED_SIZE( express_slot_capabilities_register_t, 0x4 );                               
    };                                               
};
#include "magic/express_slot_capabilities_register_t.end.hpp"
SDK_VERIFY( union pci::express_slot_capabilities_register_t, 0x4 );
