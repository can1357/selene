#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_user_info_t.start.hpp"
namespace ob
{
    // [struct _OB_EXTENDED_USER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extended_user_info_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                  
        _m00 void* context1;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context1
        _m01 void* context2;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context2
                               
        SDK_MAGIC_PROPERTIES( "_OB_EXTENDED_USER_INFO.$", 0x10, true, 0xd845156fe5e3312c );         
        SDK_FIXED_SIZE( extended_user_info_t, 0x10 );         
    };                         
};
#include "magic/extended_user_info_t.end.hpp"
SDK_VERIFY( struct ob::extended_user_info_t, 0x10 );
