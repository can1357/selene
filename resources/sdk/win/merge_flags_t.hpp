#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MergeFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class merge_flags_t : int32_t
    {                                 
        merge_flags_none =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        merge_manifest =       0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        drop_member_ref_c_as = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_dup_check =         0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        merge_exported_types = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
