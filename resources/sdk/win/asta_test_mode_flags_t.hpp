#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ASTA_TEST_MODE_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class asta_test_mode_flags_t : int32_t       
    {                                                 
        none =                                 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ro_init_singlethreaded_creates_astas = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        git_lifetime_extension_enabled =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        roinitializeasta_allowed =             0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
