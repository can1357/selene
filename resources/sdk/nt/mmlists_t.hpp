#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MMLISTS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mmlists_t : int32_t           
    {                                        
        zeroed_page_list =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free_page_list =              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standby_page_list =           0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modified_page_list =          0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modified_no_write_page_list = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_page_list =               0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        active_and_valid =            0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        transition_page =             0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
