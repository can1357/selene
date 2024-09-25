#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorRefToDefCheck]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_ref_to_def_check_t : int32_t
    {                                          
        md_ref_to_def_none =    0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_type_ref_to_def =    0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_member_ref_to_def =  0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_ref_to_def_default = 0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_ref_to_def_all =     0xff,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
