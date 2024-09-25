#pragma once
#include <sdkgen/support_library.hpp>
#include "wmi_perf_state_t.hpp"

#include "magic/wmi_perf_states_ex_t.start.hpp"
namespace ppm
{
    // [struct PPM_WMI_PERF_STATES_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_perf_states_ex_t                                             
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m00 uint32_t                                    count;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint32_t                                    max_frequency;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxFrequency
        _m02 uint32_t                                    current_state;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentState
        _m03 uint32_t                                    max_perf_state;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxPerfState
        _m04 uint32_t                                    min_perf_state;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinPerfState
        _m05 uint32_t                                    lowest_perf_state;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LowestPerfState
        _m06 uint32_t                                    thermal_constraint;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ThermalConstraint
        _m07 uint8_t                                     busy_adj_threshold;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .BusyAdjThreshold
        _m08 uint8_t                                     policy_type;         //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .PolicyType
        _m09 uint8_t                                     type;                //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .Type
        _m10 uint32_t                                    timer_interval;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TimerInterval
        _m11 void*                                       target_processors;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TargetProcessors
        _m12 uint32_t                                    p_state_handler;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PStateHandler
        _m13 uint32_t                                    p_state_context;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .PStateContext
        _m14 uint32_t                                    t_state_handler;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TStateHandler
        _m15 uint32_t                                    t_state_context;     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TStateContext
        _m16 uint32_t                                    feedback_handler;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .FeedbackHandler
        _m17 sdk::array<struct ppm::wmi_perf_state_t, 1> state;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .State
                                                                            
        SDK_MAGIC_PROPERTIES( "PPM_WMI_PERF_STATES_EX.$", 0x90, true, 0x23cdf2ca2622f9cb );                   
        SDK_FIXED_SIZE( wmi_perf_states_ex_t, 0x90 );                       
    };                                                                      
};
#include "magic/wmi_perf_states_ex_t.end.hpp"
SDK_VERIFY( struct ppm::wmi_perf_states_ex_t, 0x90 );
