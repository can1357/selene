#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _JOURNAL_CHANGE_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class journal_change_information_class_t : int32_t
    {                                                      
        journal_create_key =          0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_delete_key =          0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_rename_key =          0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_set_value =           0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_delete_value =        0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_set_key_security =    0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_set_key_user_flags =  0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_set_last_write_time = 0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_begin_transaction =   0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_commit_transaction =  0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        journal_abort_transaction =   0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_journal_change_action =   0xb,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
