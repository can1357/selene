#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorSetENC]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_set_enc_t : int32_t 
    {                                  
        md_set_enc_on =         0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_enc =         0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_set_enc_off =        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_full =        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_extension =   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_incremental = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_delta =       0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_update_mask =        0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
