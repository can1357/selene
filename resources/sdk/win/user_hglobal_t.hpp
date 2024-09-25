#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_hglobal_t.start.hpp"
namespace win
{
    // [struct _userHGLOBAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_hglobal_t      
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t f_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fContext
                               
        SDK_MAGIC_PROPERTIES( "_userHGLOBAL.$", 0x10, true, 0x6ba59af5894103f7 );          
        SDK_FIXED_SIZE( user_hglobal_t, 0x10 );          
    };                         
};
#include "magic/user_hglobal_t.end.hpp"
SDK_VERIFY( struct win::user_hglobal_t, 0x10 );
