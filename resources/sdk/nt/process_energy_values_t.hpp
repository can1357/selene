#pragma once
#include <sdkgen/support_library.hpp>
#include "energy_state_duration_t.hpp"

#include "magic/process_energy_values_t.start.hpp"
namespace nt
{
    // [struct _PROCESS_ENERGY_VALUES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_energy_values_t                                                                
    {                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                        
        _m00 sdk::array<sdk::array<uint64_t, 2>, 4>           cycles;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cycles
        _m01 uint64_t                                         disk_energy;                          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DiskEnergy
        _m02 uint64_t                                         network_tail_energy;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NetworkTailEnergy
        _m03 uint64_t                                         mbb_tail_energy;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MBBTailEnergy
        _m04 uint64_t                                         network_tx_rx_bytes;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NetworkTxRxBytes
        _m05 uint64_t                                         mbb_tx_rx_bytes;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MBBTxRxBytes
                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                        
        _m06 sdk::array<union nt::energy_state_duration_t, 3> durations;                            //{ +0x0068    +0x0068    +0x0068    } | .Durations
        _m07 union nt::energy_state_duration_t                foreground_duration;                  //{ +0x0068    +0x0068    +0x0068    } | .ForegroundDuration
        _m08 union nt::energy_state_duration_t                desktop_visible_duration;             //{ +0x0070    +0x0070    +0x0070    } | .DesktopVisibleDuration
        _m09 union nt::energy_state_duration_t                psm_foreground_duration;              //{ +0x0078    +0x0078    +0x0078    } | .PSMForegroundDuration
        _m10 uint32_t                                         composition_rendered;                 //{ +0x0080    +0x0080    +0x0080    } | .CompositionRendered
        _m11 uint32_t                                         composition_dirty_generated;          //{ +0x0084    +0x0084    +0x0084    } | .CompositionDirtyGenerated
        _m12 uint32_t                                         composition_dirty_propagated;         //{ +0x0088    +0x0088    +0x0088    } | .CompositionDirtyPropagated
        _m13 sdk::array<sdk::array<uint64_t, 2>, 4>           attributed_cycles;                    //{ +0x0090    +0x0090    +0x0090    } | .AttributedCycles
        _m14 sdk::array<sdk::array<uint64_t, 2>, 4>           work_on_behalf_cycles;                //{ +0x00d0    +0x00d0    +0x00d0    } | .WorkOnBehalfCycles
                                                                                                  
        // Windows 10 v1607                                                                       
        //                                                                                        
        _m15 uint1_t                                          foreground;                           //{ +0x0068@0  } | .Foreground
        _m16 uint1_t                                          desktop_visible;                      //{ +0x0068@1  } | .DesktopVisible
        _m17 uint16_t                                         window_information;                   //{ +0x0068    } | .WindowInformation
        _m18 uint16_t                                         compositor_rendered;                  //{ +0x006a    } | .CompositorRendered
        _m19 uint16_t                                         dirty_generated;                      //{ +0x006c    } | .DirtyGenerated
        _m20 uint16_t                                         dirty_propagated;                     //{ +0x006e    } | .DirtyPropagated
        _m21 int64_t                                          desktop_visibility_report_timestamp;  //{ +0x0070    } | .DesktopVisibilityReportTimestamp
        _m22 uint64_t                                         desktop_visible_time;                 //{ +0x0078    } | .DesktopVisibleTime
        _m23 int64_t                                          foreground_report_timestamp;          //{ +0x0080    } | .ForegroundReportTimestamp
        _m24 uint64_t                                         foreground_time;                      //{ +0x0088    } | .ForegroundTime
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_PROCESS_ENERGY_VALUES.$", 0x110, true, 0xf24b47d1b821397f );                                    
        SDK_DYNAMIC_SIZE( process_energy_values_t );                                              
    };                                                                                            
};
#include "magic/process_energy_values_t.end.hpp"
