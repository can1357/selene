#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_PROCESS_HANDLE_INFO_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_handle_info_type_t : int32_t
    {                                              
        partition_information =    0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        partition_information_v2 = 0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_dropped_times =       0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_handle_info_max =  0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
