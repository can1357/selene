#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorILMethodSect]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_il_method_sect_t : int32_t
    {                                        
        reserved =     0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eh_table =     0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        opt_il_table = 0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kind_mask =    0x3f,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fat_format =   0x40,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        more_sects =   0x80,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
