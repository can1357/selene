#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_client_security_t.start.hpp"
namespace win
{
    class c_std_identity_t;

    // [class CClientSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_client_security_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 class win::c_std_identity_t* p_std_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pStdId
                                                   
        SDK_MAGIC_PROPERTIES( "CClientSecurity.$", 0x10, true, 0x622dbabf9565eb1 );         
        SDK_FIXED_SIZE( c_client_security_t, 0x10 );         
    };                                             
};
#include "magic/c_client_security_t.end.hpp"
SDK_VERIFY( class win::c_client_security_t, 0x10 );
