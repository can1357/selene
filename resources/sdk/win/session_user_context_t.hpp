#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_user_context_t.start.hpp"
namespace win
{
    // [struct _SESSION_USER_CONTEXT]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct session_user_context_t   
    {                               
        // Windows 10 v2004, Windows 10 v20H2              
        //                          
        _m00 uint64_t context_token;  //{ +0x0000    +0x0000    } | .ContextToken
        _m01 uint32_t session_id;     //{ +0x0008    +0x0008    } | .SessionId
                                    
        SDK_MAGIC_PROPERTIES( "_SESSION_USER_CONTEXT.$", 0x10, true, 0xf41e3af1702b7ce4 );              
        SDK_FIXED_SIZE( session_user_context_t, 0x10 );              
    };                              
};
#include "magic/session_user_context_t.end.hpp"
SDK_VERIFY( struct win::session_user_context_t, 0x10 );
