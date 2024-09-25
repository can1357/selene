#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpinfoex_a_t.start.hpp"
namespace win
{
    // [struct _cpinfoexA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpinfoex_a_t                                   
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                max_char_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxCharSize
        _m01 sdk::array<uint8_t, 2>  default_char;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DefaultChar
        _m02 sdk::array<uint8_t, 12> lead_byte;             //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LeadByte
        _m03 wchar_t                 unicode_default_char;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .UnicodeDefaultChar
        _m04 uint32_t                code_page;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CodePage
        _m05 sdk::array<char, 260>   code_page_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CodePageName
                                                          
        SDK_MAGIC_PROPERTIES( "_cpinfoexA.$", 0x11c, true, 0x575fc1b625dba600 );                     
        SDK_FIXED_SIZE( cpinfoex_a_t, 0x11c );                     
    };                                                    
};
#include "magic/cpinfoex_a_t.end.hpp"
SDK_VERIFY( struct win::cpinfoex_a_t, 0x11c );
