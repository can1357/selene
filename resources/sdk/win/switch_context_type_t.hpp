#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SWITCH_CONTEXT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class switch_context_type_t : int32_t
    {                                         
        static_process_context =  0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_process_context = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_context_type =        0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
