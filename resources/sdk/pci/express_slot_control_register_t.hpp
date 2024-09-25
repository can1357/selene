#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_slot_control_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SLOT_CONTROL_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_slot_control_register_t            
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  attention_button_enable;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AttentionButtonEnable
        _m01 uint1_t  power_fault_detect_enable;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerFaultDetectEnable
        _m02 uint1_t  mrl_sensor_enable;               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MRLSensorEnable
        _m03 uint1_t  presence_detect_enable;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PresenceDetectEnable
        _m04 uint1_t  command_completed_enable;        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CommandCompletedEnable
        _m05 uint1_t  hot_plug_interrupt_enable;       //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .HotPlugInterruptEnable
        _m06 uint2_t  attention_indicator_control;     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .AttentionIndicatorControl
        _m07 uint2_t  power_indicator_control;         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PowerIndicatorControl
        _m08 uint1_t  power_controller_control;        //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .PowerControllerControl
        _m09 uint1_t  electromechanical_lock_control;  //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .ElectromechanicalLockControl
        _m10 uint1_t  data_link_state_change_enable;   //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .DataLinkStateChangeEnable
        _m11 uint3_t  rsvd;                            //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .Rsvd
        _m12 uint16_t as_ushort;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.$", 0x2, true, 0x4d3d0e4a94c4339b );                               
        SDK_FIXED_SIZE( express_slot_control_register_t, 0x2 );                               
    };                                               
};
#include "magic/express_slot_control_register_t.end.hpp"
SDK_VERIFY( union pci::express_slot_control_register_t, 0x2 );
