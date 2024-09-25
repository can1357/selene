#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_opt_cookie_auth_descriptor_t.start.hpp"
namespace rpc
{
    // [struct _RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_opt_cookie_auth_descriptor_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t buffer_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferSize
        _m01 char*    buffer;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
                                         
        SDK_MAGIC_PROPERTIES( "_RPC_C_OPT_COOKIE_AUTH_DESCRIPTOR.$", 0x10, true, 0x4ecce2e3ec525183 );            
        SDK_FIXED_SIZE( c_opt_cookie_auth_descriptor_t, 0x10 );            
    };                                   
};
#include "magic/c_opt_cookie_auth_descriptor_t.end.hpp"
SDK_VERIFY( struct rpc::c_opt_cookie_auth_descriptor_t, 0x10 );
