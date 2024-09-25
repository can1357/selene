#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpinfoex_w_t.start.hpp"
namespace win
{
    // [struct _cpinfoexW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpinfoex_w_t                                    
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 uint32_t                 max_char_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxCharSize
        _m01 sdk::array<uint8_t, 2>   default_char;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DefaultChar
        _m02 sdk::array<uint8_t, 12>  lead_byte;             //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LeadByte
        _m03 wchar_t                  unicode_default_char;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .UnicodeDefaultChar
        _m04 uint32_t                 code_page;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CodePage
        _m05 sdk::array<wchar_t, 260> code_page_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CodePageName
                                                           
        SDK_MAGIC_PROPERTIES( "_cpinfoexW.$", 0x220, true, 0x6e425ec122ca649e );                     
        SDK_FIXED_SIZE( cpinfoex_w_t, 0x220 );                     
    };                                                     
};
#include "magic/cpinfoex_w_t.end.hpp"
SDK_VERIFY( struct win::cpinfoex_w_t, 0x220 );
