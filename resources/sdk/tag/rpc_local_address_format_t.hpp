#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRpcLocalAddressFormat]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rpc_local_address_format_t : int32_t
    {                                              
        invalid = 0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_pv4 =   0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_pv6 =   0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
