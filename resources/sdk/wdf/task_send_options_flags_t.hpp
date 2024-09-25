#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_TASK_SEND_OPTIONS_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class task_send_options_flags_t : int32_t
    {                                             
        timeout =     0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronous = 0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
