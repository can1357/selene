#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_ACTIVITY_CALLBACK_SUBJECT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_activity_callback_subject_t : int32_t
    {                                                   
        callback_started =      0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_stop_request = 0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_invalidated =  0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_last_message = 0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        subject_count =         0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
