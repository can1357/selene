#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_information1_t.start.hpp"
namespace rpc
{
    // [struct RPC_CLIENT_INFORMATION1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_information1_t    
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t* user_name;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserName
        _m01 uint8_t* computer_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComputerName
        _m02 uint16_t privilege;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Privilege
        _m03 uint32_t auth_flags;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AuthFlags
                                    
        SDK_MAGIC_PROPERTIES( "RPC_CLIENT_INFORMATION1.$", 0x18, true, 0x5a068b55a5d26006 );              
        SDK_FIXED_SIZE( client_information1_t, 0x18 );              
    };                              
};
#include "magic/client_information1_t.end.hpp"
SDK_VERIFY( struct rpc::client_information1_t, 0x18 );
