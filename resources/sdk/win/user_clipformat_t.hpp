#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_clipformat_t.start.hpp"
namespace win
{
    // [struct _userCLIPFORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_clipformat_t   
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t f_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fContext
                               
        SDK_MAGIC_PROPERTIES( "_userCLIPFORMAT.$", 0x10, true, 0xb8c06515b51fb21e );          
        SDK_FIXED_SIZE( user_clipformat_t, 0x10 );          
    };                         
};
#include "magic/user_clipformat_t.end.hpp"
SDK_VERIFY( struct win::user_clipformat_t, 0x10 );
