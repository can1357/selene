#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "hotplug_event_type_t.hpp"
#include "hotplug_slot_state_t.hpp"

#include "magic/hotplug_slot_t.start.hpp"
namespace pci
{
    struct device_t;
    struct hotplug_controller_t;

    // [struct _PCI_HOTPLUG_SLOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hotplug_slot_t                                                                  
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                 
        _m00 uint32_t                                       physical_slot_number;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalSlotNumber
        _m01 uint8_t                                        hot_plug_surprise;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HotPlugSurprise
        _m02 uint8_t                                        removable;                       //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Removable
        _m03 enum pci::hotplug_slot_state_t                 current_state;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentState
        _m04 struct pci::hotplug_controller_t*              controller;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Controller
        _m05 struct pci::device_t*                          device;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Device
        _m06 uint64_t                                       device_lock;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceLock
        _m07 nt::list_entry_t                               event_queue;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EventQueue
        _m08 uint64_t                                       queue_lock;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .QueueLock
        _m09 uint8_t                                        event_queue_blocked;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EventQueueBlocked
        _m10 struct nt::ktimer_t                            timer;                           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Timer
        _m11 struct nt::kdpc_t                              timer_dpc;                       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .TimerDpc
        _m12 uint32_t                                       timer_flags;                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .TimerFlags
        _m13 int32_t                                        slot_interrupts;                 //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .SlotInterrupts
        _m14 uint8_t                                        attention_button_present;        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .AttentionButtonPresent
        _m15 uint8_t                                        power_controller_present;        //{ +0x00d1    +0x00d1    +0x00d1    +0x00d1    } | .PowerControllerPresent
        _m16 uint8_t                                        mrl_sensor_present;              //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .MRLSensorPresent
        _m17 uint8_t                                        attention_indicator_present;     //{ +0x00d3    +0x00d3    +0x00d3    +0x00d3    } | .AttentionIndicatorPresent
        _m18 uint8_t                                        power_indicator_present;         //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .PowerIndicatorPresent
        _m19 uint8_t                                        electromechanical_lock_present;  //{ +0x00d5    +0x00d5    +0x00d5    +0x00d5    } | .ElectromechanicalLockPresent
        _m20 uint8_t                                        attention_indicator_flags;       //{ +0x00d6    +0x00d6    +0x00d6    +0x00d6    } | .AttentionIndicatorFlags
        _m21 sdk::array<enum pci::hotplug_event_type_t, 14> event_map;                       //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .EventMap
                                                                                           
        SDK_MAGIC_PROPERTIES( "_PCI_HOTPLUG_SLOT.$", 0x110, true, 0x836b68f4d46726cc );                               
        SDK_FIXED_SIZE( hotplug_slot_t, 0x110 );                                           
    };                                                                                     
};
#include "magic/hotplug_slot_t.end.hpp"
SDK_VERIFY( struct pci::hotplug_slot_t, 0x110 );
