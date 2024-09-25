#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sleepstudy_spm_scenario_cs_exit_t : int32_t
    {                                                     
        unspecified =                 0x10,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cs_exit =                     0x11,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_segment_transition = 0x12,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                       0x12,                 // Windows 10 v1607
        max =                         0x13,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
