#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PULLSTATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pullstate_t : int32_t    
    {                                   
        pullstate0_entry =       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate1_first_call =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate2_ns_r_qls_ra = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate3_ns_r_qge_ra = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate4_s_r_qls_bs =  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate5_s_r_qge_bs =  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pullstate6_done =        0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
