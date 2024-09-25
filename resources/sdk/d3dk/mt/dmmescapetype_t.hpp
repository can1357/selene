#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DMMESCAPETYPE]
    //  WDK 10
    //
    enum class dmmescapetype_t : int32_t             
    {                                                
        uninitialized =                       0x0,     // WDK 10
        get_summary_info =                    0x1,     // WDK 10
        get_video_present_sources_info =      0x2,     // WDK 10
        get_video_present_targets_info =      0x3,     // WDK 10
        get_activevidpn_info =                0x4,     // WDK 10
        get_monitors_info =                   0x5,     // WDK 10
        recently_committed_vidpns_info =      0x6,     // WDK 10
        recent_modechange_requests_info =     0x7,     // WDK 10
        recently_recommended_vidpns_info =    0x8,     // WDK 10
        recent_monitor_presence_events_info = 0x9,     // WDK 10
        activevidpn_sourcemodeset_info =      0xa,     // WDK 10
        activevidpn_cofuncpathmodality_info = 0xb,     // WDK 10
        get_lastclientcommittedvidpn_info =   0xc,     // WDK 10
        get_version_info =                    0xd,     // WDK 10
        vidpn_mgr_diagnostics =               0xe,     // WDK 10
    };                                               
};
