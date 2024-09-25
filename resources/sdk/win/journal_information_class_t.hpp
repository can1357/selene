#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _JOURNAL_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class journal_information_class_t : int32_t
    {                                               
        journal_absolute_information = 0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_client_information =   0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_journal_information =      0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
