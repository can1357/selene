#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorILMethodFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_il_method_flags_t : int32_t
    {                                         
        small_format =  0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tiny_format =   0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fat_format =    0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        format_shift =  0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tiny_format1 =  0x6,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        format_mask =   0x7,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        more_sects =    0x8,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_locals =   0x10,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compressed_il = 0x40,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
