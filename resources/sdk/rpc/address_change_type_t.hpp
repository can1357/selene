#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum RPC_ADDRESS_CHANGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class address_change_type_t : int32_t
    {                                         
        not_loaded =     0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loaded =         0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        address_change = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
