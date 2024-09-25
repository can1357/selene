#pragma once
#include <sdkgen/support_library.hpp>

namespace asl
{
    // [enum ASL_FILE_KIND_DETAIL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_kind_detail_t : int32_t
    {                                      
        uninitialized =        0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        zero_byte =            0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_only =            0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dos_module =           0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ne16_module =          0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_unknown =         0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_i386 =            0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_arm =             0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe64_unknown =         0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe64_amd64 =           0x9,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe64_arm64 =           0xa,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe64_ia64 =            0xb,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_clr_32 =          0xc,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_clr_il =          0xd,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_clr_il_prefer32 = 0xe,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe64_clr_64 =          0xf,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                  0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
