#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PROCESS_TLS_INFORMATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class process_tls_information_type_t : int32_t
    {                                                  
        process_tls_replace_index =  0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_tls_replace_vector = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_process_tls_operation =  0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
