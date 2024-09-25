#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum _SDB_CUSTOMDB_ENTRY_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class customdb_entry_state_t : int32_t
    {                                          
        unknown =   0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =   0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =  0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_found = 0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
