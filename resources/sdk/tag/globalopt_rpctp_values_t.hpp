#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagGLOBALOPT_RPCTP_VALUES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_rpctp_values_t : int32_t
    {                                            
        default_pool = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        private_pool = 0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
