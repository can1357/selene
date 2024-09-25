#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLTP_WORK_QUEUE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fltp_work_queue_type_t : int32_t
    {                                          
        critical_work_queue =       0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delayed_work_queue =        0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hyper_critical_work_queue = 0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_work_queue =        0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
