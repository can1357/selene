#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "hotplug_slot_t.hpp"
#include "hotplug_commandtype_t.hpp"

#include "magic/hotplug_controller_t.start.hpp"
namespace pci
{
    struct bridge_t;
    struct hotplug_controller_t;

    // [struct _PCI_HOTPLUG_CONTROLLER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hotplug_controller_t                                                                
    {                                                                                          
        using get_device_presence_state_t =            sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*;                                        
        using get_latch_state_t =                      sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*;                                        
        using get_link_state_t =                       sdk::function<uint8_t(struct pci::hotplug_slot_t*)>*;                                        
        using execute_hot_plug_commands_t =            sdk::function<uint8_t(struct pci::hotplug_slot_t*, enum pci::hotplug_commandtype_t, uint64_t)>*;                                        
        using enable_disable_controller_interrupts_t = sdk::function<uint8_t(struct pci::hotplug_controller_t*, uint8_t)>*;                                        
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                     
        _m00 struct pci::bridge_t*                     pci_bridge;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PciBridge
        _m01 nt::list_entry_t                          action_queue;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActionQueue
        _m02 uint64_t                                  queue_lock;                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .QueueLock
        _m03 uint8_t                                   action_queue_blocked;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ActionQueueBlocked
        _m04 struct nt::ktimer_t                       command_timer;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CommandTimer
        _m05 struct nt::kdpc_t                         command_timer_dpc;                        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CommandTimerDpc
        _m06 uint64_t                                  timer_lock;                               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .TimerLock
        _m07 uint8_t                                   timers_disabled;                          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .TimersDisabled
        _m08 uint8_t                                   link_active_reporting_capable;            //{ +0x00b1    +0x00b1    +0x00b1    +0x00b1    } | .LinkActiveReportingCapable
        _m09 uint8_t                                   instantaneous_command_complete_support;   //{ +0x00b2    +0x00b2    +0x00b2    +0x00b2    } | .InstantaneousCommandCompleteSupport
        _m10 uint8_t                                   command_complete_interrupt_pending;       //{ +0x00b3    +0x00b3    +0x00b3    +0x00b3    } | .CommandCompleteInterruptPending
        _m11 uint32_t                                  unprocessed_command_complete_interrupts;  //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .UnprocessedCommandCompleteInterrupts
        _m12 get_device_presence_state_t               get_device_presence_state;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .GetDevicePresenceState
        _m13 get_latch_state_t                         get_latch_state;                          //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .GetLatchState
        _m14 get_link_state_t                          get_link_state;                           //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .GetLinkState
        _m15 execute_hot_plug_commands_t               execute_hot_plug_commands;                //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ExecuteHotPlugCommands
        _m16 enable_disable_controller_interrupts_t    enable_disable_controller_interrupts;     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .EnableDisableControllerInterrupts
        _m17 uint32_t                                  slot_count;                               //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .SlotCount
        _m18 sdk::array<struct pci::hotplug_slot_t, 1> slots;                                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .Slots
                                                                                               
        SDK_MAGIC_PROPERTIES( "_PCI_HOTPLUG_CONTROLLER.$", 0x1f8, true, 0x770b0f71d4e56e8c );                                        
        SDK_FIXED_SIZE( hotplug_controller_t, 0x1f8 );                                         
    };                                                                                         
};
#include "magic/hotplug_controller_t.end.hpp"
SDK_VERIFY( struct pci::hotplug_controller_t, 0x1f8 );
