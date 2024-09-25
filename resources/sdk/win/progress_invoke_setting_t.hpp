#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROGRESS_INVOKE_SETTING]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class progress_invoke_setting_t : int32_t
    {                                             
        invoke_never =          0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoke_every_object =   0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoke_on_error =       0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_operation =      0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry_operation =       0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invoke_pre_post_error = 0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
