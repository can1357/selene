#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_hmetafile_t.start.hpp"
namespace win
{
    // [struct _userHMETAFILE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_hmetafile_t    
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t f_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fContext
                               
        SDK_MAGIC_PROPERTIES( "_userHMETAFILE.$", 0x10, true, 0x580359e3bec8e654 );          
        SDK_FIXED_SIZE( user_hmetafile_t, 0x10 );          
    };                         
};
#include "magic/user_hmetafile_t.end.hpp"
SDK_VERIFY( struct win::user_hmetafile_t, 0x10 );
