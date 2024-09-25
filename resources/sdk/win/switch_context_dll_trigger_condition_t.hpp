#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SWITCH_CONTEXT_DLL_TRIGGER_CONDITION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class switch_context_dll_trigger_condition_t : int32_t
    {                                                          
        mapped =   0x0,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmapped = 0x1,                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
