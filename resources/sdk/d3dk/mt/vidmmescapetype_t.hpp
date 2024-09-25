#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_VIDMMESCAPETYPE]
    //  WDK 10
    //
    enum class vidmmescapetype_t : int32_t     
    {                                          
        setfault =                     0x0,      // WDK 10
        run_coherency_test =           0x1,      // WDK 10
        run_unmap_to_dummy_page_test = 0x2,      // WDK 10
        aperture_corruption_check =    0x3,      // WDK 10
        suspend_cpu_access_test =      0x4,      // WDK 10
        evict =                        0x5,      // WDK 10
        evict_by_nt_handle =           0x6,      // WDK 10
        get_vad_info =                 0x7,      // WDK 10
        set_budget =                   0x8,      // WDK 10
        suspend_process =              0x9,      // WDK 10
        resume_process =               0xa,      // WDK 10
        get_budget =                   0xb,      // WDK 10
        set_trim_intervals =           0xc,      // WDK 10
        evict_by_criteria =            0xd,      // WDK 10
        wake =                         0xe,      // WDK 10
        defrag =                       0xf,      // WDK 10
        delayexecution =               0x10,     // WDK 10
        validate_integrity =           0x11,     // WDK 10
    };                                         
};
