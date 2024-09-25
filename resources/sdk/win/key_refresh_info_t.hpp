#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_refresh_info_t.start.hpp"
namespace win
{
    struct key_full_information_t;
    struct key_name_information_t;

    // [struct KeyRefreshInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_refresh_info_t                              
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                 
        _m00 struct win::key_full_information_t* full_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fullInfo
        _m01 struct win::key_name_information_t* name_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .nameInfo
                                                           
        SDK_MAGIC_PROPERTIES( "KeyRefreshInfo.$", 0x10, true, 0xfa1ec8c630c95c58 );          
        SDK_FIXED_SIZE( key_refresh_info_t, 0x10 );          
    };                                                     
};
#include "magic/key_refresh_info_t.end.hpp"
SDK_VERIFY( struct win::key_refresh_info_t, 0x10 );
