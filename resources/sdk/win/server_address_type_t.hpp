#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerAddressType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_address_type_t : int32_t
    {                                         
        network_address =   0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hv_socket_address = 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
