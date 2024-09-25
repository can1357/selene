#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ETWTRACECONTROLCODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class etwtracecontrolcode_t : int32_t
    {                                         
        start_logger_code =        0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop_logger_code =         0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_logger_code =        0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        update_logger_code =       0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_logger_code =        0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        increment_file_code =      0x6,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        realtime_transition_code = 0x7,         // Windows 11
        activity_id_create =       0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdi_scenario_code =        0xd,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdi_sem_update =           0x14,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
