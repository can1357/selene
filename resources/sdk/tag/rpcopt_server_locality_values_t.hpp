#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRPCOPT_SERVER_LOCALITY_VALUES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rpcopt_server_locality_values_t : int32_t
    {                                                   
        process_local = 0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machine_local = 0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote =        0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
