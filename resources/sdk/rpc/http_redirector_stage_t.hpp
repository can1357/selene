#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum _RPC_HTTP_REDIRECTOR_STAGE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class http_redirector_stage_t : int32_t
    {                                           
        redirect =  0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_1 =  0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session =   0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        access_2 =  0x4,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface = 0x5,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
