#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum UoWActionType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class uo_w_action_type_t : int32_t
    {                                      
        w_add_this_key =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_add_child_key =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_delete_this_key =         0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_delete_child_key =        0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_set_value_new =           0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_set_value_existing =      0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_delete_value =            0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_set_key_user_flags =      0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_set_last_write_time =     0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_set_security_descriptor = 0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_rename_sub_key =          0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_rename_old_sub_key =      0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_rename_new_sub_key =      0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_isolation =               0xd,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        w_invalid =                 0xe,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
