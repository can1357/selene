#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_TERMINATE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_terminate_type_t : int32_t
    {                                        
        invalid =              0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        graceful =             0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        collect_error_report = 0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        force =                0x3,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
