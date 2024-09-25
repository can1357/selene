#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_slot_status_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_SLOT_STATUS_REGISTER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_slot_status_register_t             
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  attention_button_pressed;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .AttentionButtonPressed
        _m01 uint1_t  power_fault_detected;            //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PowerFaultDetected
        _m02 uint1_t  mrl_sensor_changed;              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MRLSensorChanged
        _m03 uint1_t  presence_detect_changed;         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PresenceDetectChanged
        _m04 uint1_t  command_completed;               //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CommandCompleted
        _m05 uint1_t  mrl_sensor_state;                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .MRLSensorState
        _m06 uint1_t  presence_detect_state;           //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PresenceDetectState
        _m07 uint1_t  electromechanical_lock_engaged;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .ElectromechanicalLockEngaged
        _m08 uint1_t  data_link_state_changed;         //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .DataLinkStateChanged
        _m09 uint7_t  rsvd;                            //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Rsvd
        _m10 uint16_t as_ushort;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SLOT_STATUS_REGISTER.$", 0x2, true, 0x65d75e68fde788a7 );                               
        SDK_FIXED_SIZE( express_slot_status_register_t, 0x2 );                               
    };                                               
};
#include "magic/express_slot_status_register_t.end.hpp"
SDK_VERIFY( union pci::express_slot_status_register_t, 0x2 );
