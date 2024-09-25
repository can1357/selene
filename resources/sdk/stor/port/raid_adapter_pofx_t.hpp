#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t;      }
namespace nt { struct pohandle_t; }

#include "magic/raid_adapter_pofx_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_ADAPTER_POFX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_adapter_pofx_t                                          
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                              
        _m00 struct nt::pohandle_t*  po_handle;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PoHandle
        _m01 void*                   po_fx_device;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoFxDevice
        _m02 uint32_t                current_f_state;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentFState
        _m03 uint1_t                 active;                              //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .Active
        _m04 uint1_t                 device_power_required;               //{ +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  } | .DevicePowerRequired
        _m05 uint1_t                 stopped_active_reference;            //{ +0x0014@2  +0x0014@2  +0x0014@2  +0x0014@2  } | .StoppedActiveReference
        _m06 uint1_t                 dpnr_in_cs;                          //{ +0x0014@3  +0x0014@3  +0x0014@3  +0x0014@3  } | .DPNRInCS
        _m07 uint1_t                 f1_in_cs;                            //{ +0x0014@4  +0x0014@4  +0x0014@4  +0x0014@4  } | .F1InCS
        _m08 uint8_t                 registered_perf_sets;                //{ +0x0018    +0x001c    +0x001c    +0x001c    } | .RegisteredPerfSets
        _m09 uint64_t                operational_power_max;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OperationalPowerMax
        _m10 uint64_t                operational_power_min;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OperationalPowerMin
        _m11 sdk::array<uint64_t, 3> max_operational_power;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxOperationalPower
                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                              
        _m12 uint1_t                 d_fx_power_down_in_cs;               //{ +0x0014@5  +0x0014@5  +0x0014@5  } | .DFxPowerDownInCS
        _m13 uint1_t                 wait_wake_irp_sent;                  //{ +0x0014@6  +0x0014@6  +0x0014@6  } | .WaitWakeIrpSent
        _m14 uint1_t                 wake_capable;                        //{ +0x0014@7  +0x0014@7  +0x0014@7  } | .WakeCapable
        _m15 uint32_t                wait_wake_active_reference;          //{ +0x0018    +0x0018    +0x0018    } | .WaitWakeActiveReference
        _m16 struct nt::irp_t*       wait_wake_irp;                       //{ +0x0048    +0x0048    +0x0048    } | .WaitWakeIrp
                                                                        
        // Windows 10 v1607, Windows 11                                   
        //                                                              
        _m17 uint64_t                miniport_active_references;          //{ +0x0058    +0x0050    } | .MiniportActiveReferences
                                                                        
        // Windows 10 v1607                                             
        //                                                              
        _m18 uint64_t                active_references;                   //{ +0x0048    } | .ActiveReferences
        _m19 uint64_t                ioctl_active_references;             //{ +0x0050    } | .IoctlActiveReferences
                                                                        
        // Windows 11                                                   
        //                                                              
        _m20 uint1_t                 f0_only;                             //{ +0x0014@8  } | .F0Only
        _m21 uint64_t                miniport_active_reference_acquires;  //{ +0x0058    } | .MiniportActiveReferenceAcquires
        _m22 uint64_t                miniport_active_reference_releases;  //{ +0x0060    } | .MiniportActiveReferenceReleases
                                                                        
        SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_POFX.$", 0x50, true, 0xc603ea662f5d20a5 );                                   
        SDK_DYNAMIC_SIZE( raid_adapter_pofx_t );                                   
    };                                                                  
};
#include "magic/raid_adapter_pofx_t.end.hpp"
