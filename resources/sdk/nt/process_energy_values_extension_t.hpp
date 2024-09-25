#pragma once
#include <sdkgen/support_library.hpp>
#include "timeline_bitmap_t.hpp"
#include "energy_state_duration_t.hpp"

#include "magic/process_energy_values_extension_t.start.hpp"
namespace nt
{
    // [struct _PROCESS_ENERGY_VALUES_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_energy_values_extension_t                                                        
    {                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m00 sdk::array<union nt::timeline_bitmap_t, 14>      timelines;                              //{ +0x0000    +0x0000    +0x0000    } | .Timelines
        _m01 union nt::timeline_bitmap_t                      cpu_timeline;                           //{ +0x0000    +0x0000    +0x0000    } | .CpuTimeline
        _m02 union nt::timeline_bitmap_t                      disk_timeline;                          //{ +0x0008    +0x0008    +0x0008    } | .DiskTimeline
        _m03 union nt::timeline_bitmap_t                      network_timeline;                       //{ +0x0010    +0x0010    +0x0010    } | .NetworkTimeline
        _m04 union nt::timeline_bitmap_t                      mbb_timeline;                           //{ +0x0018    +0x0018    +0x0018    } | .MBBTimeline
        _m05 union nt::timeline_bitmap_t                      foreground_timeline;                    //{ +0x0020    +0x0020    +0x0020    } | .ForegroundTimeline
        _m06 union nt::timeline_bitmap_t                      desktop_visible_timeline;               //{ +0x0028    +0x0028    +0x0028    } | .DesktopVisibleTimeline
        _m07 union nt::timeline_bitmap_t                      composition_rendered_timeline;          //{ +0x0030    +0x0030    +0x0030    } | .CompositionRenderedTimeline
        _m08 union nt::timeline_bitmap_t                      composition_dirty_generated_timeline;   //{ +0x0038    +0x0038    +0x0038    } | .CompositionDirtyGeneratedTimeline
        _m09 union nt::timeline_bitmap_t                      composition_dirty_propagated_timeline;  //{ +0x0040    +0x0040    +0x0040    } | .CompositionDirtyPropagatedTimeline
        _m10 union nt::timeline_bitmap_t                      input_timeline;                         //{ +0x0048    +0x0048    +0x0048    } | .InputTimeline
        _m11 union nt::timeline_bitmap_t                      audio_in_timeline;                      //{ +0x0050    +0x0050    +0x0050    } | .AudioInTimeline
        _m12 union nt::timeline_bitmap_t                      audio_out_timeline;                     //{ +0x0058    +0x0058    +0x0058    } | .AudioOutTimeline
        _m13 union nt::timeline_bitmap_t                      display_required_timeline;              //{ +0x0060    +0x0060    +0x0060    } | .DisplayRequiredTimeline
        _m14 union nt::timeline_bitmap_t                      keyboard_input_timeline;                //{ +0x0068    +0x0068    +0x0068    } | .KeyboardInputTimeline
        _m15 sdk::array<union nt::energy_state_duration_t, 5> durations;                              //{ +0x0070    +0x0070    +0x0070    } | .Durations
        _m16 union nt::energy_state_duration_t                input_duration;                         //{ +0x0070    +0x0070    +0x0070    } | .InputDuration
        _m17 union nt::energy_state_duration_t                audio_in_duration;                      //{ +0x0078    +0x0078    +0x0078    } | .AudioInDuration
        _m18 union nt::energy_state_duration_t                audio_out_duration;                     //{ +0x0080    +0x0080    +0x0080    } | .AudioOutDuration
        _m19 union nt::energy_state_duration_t                display_required_duration;              //{ +0x0088    +0x0088    +0x0088    } | .DisplayRequiredDuration
        _m20 union nt::energy_state_duration_t                psm_background_duration;                //{ +0x0090    +0x0090    +0x0090    } | .PSMBackgroundDuration
        _m21 uint32_t                                         keyboard_input;                         //{ +0x0098    +0x0098    +0x0098    } | .KeyboardInput
        _m22 uint32_t                                         mouse_input;                            //{ +0x009c    +0x009c    +0x009c    } | .MouseInput
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_ENERGY_VALUES_EXTENSION.$", 0xa0, true, 0xe2cd654a2fa87821 );                                      
        SDK_FIXED_SIZE( process_energy_values_extension_t, 0xa0 );                                      
    };                                                                                              
};
#include "magic/process_energy_values_extension_t.end.hpp"
SDK_VERIFY( struct nt::process_energy_values_extension_t, 0xa0 );
