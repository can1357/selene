#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FILE_LIST_CTRL_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_list_ctrl_flags_t : int32_t
    {                                          
        linked_to_file =     0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleaned_up =         0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        linked_as_strm_ctx = 0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
