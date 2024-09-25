#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum STUB_PHASE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stub_phase_t : int32_t   
    {                                   
        unmarshal =              0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_server =            0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshal =                0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_server_no_hresult = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
