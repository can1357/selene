#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "hibernate_info_t.hpp"
#include "root_bus_hardware_capability_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/root_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct root_t;
    struct segment_t;
    struct root_complex_t;
    struct bus_interface_standard_t;

    // [struct _PCI_ROOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct root_t                                                                                   
    {                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                          
        _m00 struct pci::root_t*                        next;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct pci::segment_t*                     segment;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Segment
        _m02 struct pci::bus_t*                         bus;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Bus
        _m03 struct pci::root_complex_t*                root_complex;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RootComplex
        _m04 struct pci::bus_interface_standard_t*      pci_bus_interface;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PciBusInterface
        _m05 struct pci::root_bus_hardware_capability_t hardware_capability;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HardwareCapability
        _m06 struct rtl::bitmap_t                       bridge_map;                                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .BridgeMap
        _m07 sdk::array<uint32_t, 9>                    bridge_map_buffer;                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BridgeMapBuffer
        _m08 struct whea::error_source_descriptor_t     error_source_descriptor;                      //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .ErrorSourceDescriptor
        _m09 nt::list_entry_t                           pme_root_port_list;                           //{ +0x0450    +0x0450    +0x0450    +0x0450    } | .PmeRootPortList
        _m10 nt::list_entry_t                           pme_wait_wake_send_list;                      //{ +0x0460    +0x0460    +0x0460    +0x0460    } | .PmeWaitWakeSendList
        _m11 nt::list_entry_t                           pme_wait_wake_complete_list;                  //{ +0x0470    +0x0470    +0x0470    +0x0470    } | .PmeWaitWakeCompleteList
        _m12 nt::list_entry_t                           pme_wait_wake_cancel_list;                    //{ +0x0480    +0x0480    +0x0480    +0x0480    } | .PmeWaitWakeCancelList
        _m13 nt::list_entry_t                           pme_d0_send_list;                             //{ +0x0490    +0x0490    +0x0490    +0x0490    } | .PmeD0SendList
        _m14 nt::list_entry_t                           pme_d0_retire_list;                           //{ +0x04a0    +0x04a0    +0x04a0    +0x04a0    } | .PmeD0RetireList
        _m15 nt::list_entry_t                           pme_queue_wake_event_list;                    //{ +0x04b0    +0x04b0    +0x04b0    +0x04b0    } | .PmeQueueWakeEventList
        _m16 struct nt::kthread_t*                      pme_dispatcher_thread;                        //{ +0x04c0    +0x04e0    +0x04e0    +0x04e0    } | .PmeDispatcherThread
        _m17 uint64_t                                   pme_list_lock;                                //{ +0x04c8    +0x04e8    +0x04e8    +0x04e8    } | .PmeListLock
        _m18 sdk::array<struct nt::kevent_t, 8>         pme_event;                                    //{ +0x04d0    +0x04f0    +0x04f0    +0x04f0    } | .PmeEvent
        _m19 uint1_t                                    dsm_for_delay_on_sx_resume_evaluated;         //{ +0x0590@0  +0x0630@0  +0x0630@0  +0x0630@0  } | .DsmForDelayOnSxResumeEvaluated
        _m20 uint1_t                                    delay_on_sx_resume;                           //{ +0x0590@1  +0x0630@1  +0x0630@1  +0x0630@1  } | .DelayOnSxResume
        _m21 uint32_t                                   flags_as_ulong;                               //{ +0x0590    +0x0630    +0x0630    +0x0630    } | .FlagsAsULONG
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                          
        _m22 nt::list_entry_t                           pme_ww_send_cancel_bus_power_available_list;  //{ +0x04c0    +0x04c0    +0x04c0    } | .PmeWWSendCancelBusPowerAvailableList
        _m23 nt::list_entry_t                           pme_drips_watchdog_callback_list;             //{ +0x04d0    +0x04d0    +0x04d0    } | .PmeDripsWatchdogCallbackList
        _m24 struct pci::hibernate_info_t               hibernate_info;                               //{ +0x05e0    +0x05e0    +0x05e0    } | .HibernateInfo
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_PCI_ROOT.$", 0x638, true, 0x9303cd6dd3c6b5fb );                                            
        SDK_DYNAMIC_SIZE( root_t );                                                                 
    };                                                                                              
};
#include "magic/root_t.end.hpp"
