#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_guid_str_t.start.hpp"
namespace win
{
    // [class CGuidStr]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_guid_str_t                        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 sdk::array<wchar_t, 40> wsz_guid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._wszGuid
                                              
        SDK_MAGIC_PROPERTIES( "CGuidStr.$", 0x50, true, 0x8b5ecff25ac77be8 );         
        SDK_FIXED_SIZE( c_guid_str_t, 0x50 );         
    };                                        
};
#include "magic/c_guid_str_t.end.hpp"
SDK_VERIFY( class win::c_guid_str_t, 0x50 );
