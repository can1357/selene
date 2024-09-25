#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MIDL_ES_HANDLE_STYLE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_es_handle_style_t : int32_t
    {                                          
        incremental_handle =    0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fixed_buffer_handle =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic_buffer_handle = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
