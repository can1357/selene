#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_WORKING_SET_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_working_set_operation_t : int32_t
    {                                                   
        swap =          0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        empty =         0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_max = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
