#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/menuitemtemplate_t.start.hpp"
namespace win
{
    // [struct MENUITEMTEMPLATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menuitemtemplate_t                 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 uint16_t               mt_option;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mtOption
        _m01 uint16_t               mt_id;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .mtID
        _m02 sdk::array<wchar_t, 1> mt_string;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .mtString
                                              
        SDK_MAGIC_PROPERTIES( "MENUITEMTEMPLATE.$", 0x6, true, 0xbf9f2e09e7a112e7 );          
        SDK_FIXED_SIZE( menuitemtemplate_t, 0x6 );          
    };                                        
};
#include "magic/menuitemtemplate_t.end.hpp"
SDK_VERIFY( struct win::menuitemtemplate_t, 0x6 );
