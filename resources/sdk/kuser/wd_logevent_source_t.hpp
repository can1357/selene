#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum _WD_LOGEVENT_SOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wd_logevent_source_t : int32_t
    {                                        
        log_src_unknown =            0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_src_first =              0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_dxg_port =             0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_dxgkrnl =              0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_memory_manager =       0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_scheduler =            0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_tdr =                  0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_display_mode_manager = 0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_cdd =                  0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gdi =                        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nt_user =                    0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_src_all =                0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        video_smm =                  0xa,      // Windows 11
        //log_src_all =              0xb,      // Windows 11
    };                                       
};
