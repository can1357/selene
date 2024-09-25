#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/localeinfo_struct_t.start.hpp"
namespace win
{
    struct threadmbcinfostruct_t;
    struct threadlocaleinfostruct_t;

    // [struct localeinfo_struct]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct localeinfo_struct_t                             
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                 
        _m00 struct win::threadlocaleinfostruct_t* locinfo;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .locinfo
        _m01 struct win::threadmbcinfostruct_t*    mbcinfo;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .mbcinfo
                                                           
        SDK_MAGIC_PROPERTIES( "localeinfo_struct.$", 0x10, true, 0xa754a6cf4dea2394 );        
        SDK_FIXED_SIZE( localeinfo_struct_t, 0x10 );        
    };                                                     
};
#include "magic/localeinfo_struct_t.end.hpp"
SDK_VERIFY( struct win::localeinfo_struct_t, 0x10 );
