#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_monitor_type_t.hpp"
#include "mode_pruning_algorithm_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../d3dk/mdt/monitor_orientation_t.hpp"

#include "magic/monitor_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_MONITOR_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitor_serialization_t                                                  
    {                                                                               
        struct u0_monitor_flags_t                                                   
        {                                                                           
            // Windows 11                                                           
            //                                                                      
            _m11 uint1_t sync_lock_identical;                                         //{ +0x0000@0  } | .SyncLockIdentical
            _m12 uint1_t high_color_support;                                          //{ +0x0000@1  } | .HighColorSupport
            _m13 uint1_t wide_color_support;                                          //{ +0x0000@2  } | .WideColorSupport
            _m14 uint1_t display_port_address_valid;                                  //{ +0x0000@3  } | .DisplayPortAddressValid
            _m15 uint1_t is_usb4_monitor;                                             //{ +0x0000@4  } | .IsUsb4Monitor
                                                                                    
            SDK_MAGIC_PROPERTIES( "_DMM_MONITOR_SERIALIZATION.MonitorFlags.$", 0x0, false, 0x71c9db9aef4ce2d7 );                                                           
            SDK_FIXED_SIZE( u0_monitor_flags_t, 0x2 );                                                           
        };                                                                          
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                          
        _m00 uint32_t                               size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                               video_present_target_id;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VideoPresentTargetId
        _m02 enum d3dk::mdt::monitor_orientation_t  orientation;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Orientation
        _m03 uint8_t                                is_simulated_monitor;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IsSimulatedMonitor
        _m04 uint8_t                                is_using_default_profile;         //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .IsUsingDefaultProfile
        _m05 enum dmm::mode_pruning_algorithm_t     mode_pruning_algorithm;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ModePruningAlgorithm
        _m06 enum nt::device_power_state_t          monitor_power_state;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MonitorPowerState
        _m07 uint32_t                               source_mode_set_offset;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SourceModeSetOffset
        _m08 uint32_t                               frequency_range_set_offset;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .FrequencyRangeSetOffset
        _m09 uint32_t                               descriptor_set_offset;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DescriptorSetOffset
        _m10 enum dmm::vidpn_monitor_type_t         monitor_type;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MonitorType
                                                                                    
        // Windows 11                                                               
        //                                                                          
        _m16 u0_monitor_flags_t                     monitor_flags;                    //{ +0x000e    } | .MonitorFlags
        _m17 uint8_t                                display_port_address_link_count;  //{ +0x0028    } | .DisplayPortAddressLinkCount
        _m18 sdk::array<uint8_t, 15>                display_port_address;             //{ +0x0029    } | .DisplayPortAddress
                                                                                    
        SDK_MAGIC_PROPERTIES( "_DMM_MONITOR_SERIALIZATION.$", 0x28, true, 0x41c75aa03da6b0a0 );                                
        SDK_DYNAMIC_SIZE( monitor_serialization_t );                                
    };                                                                              
};
#include "magic/monitor_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::monitor_serialization_t::u0_monitor_flags_t, 0x2 );
