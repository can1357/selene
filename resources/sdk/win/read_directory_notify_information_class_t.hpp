#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _READ_DIRECTORY_NOTIFY_INFORMATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class read_directory_notify_information_class_t : int32_t
    {                                                             
        information =          0x1,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        extended_information = 0x2,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                            
};
