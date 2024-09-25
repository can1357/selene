#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/char_info_t.start.hpp"
namespace win
{
    // [struct _CHAR_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct char_info_t                           
    {                                            
        union u0__char_t                         
        {                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                   
            _m00 wchar_t unicode_char;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UnicodeChar
            _m01 char    ascii_char;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsciiChar
                                                 
            SDK_NONVOL_PROPERTIES( "_CHAR_INFO.Char.$", 0x2, true, 0xc335c8db19411015 );                        
            SDK_FIXED_SIZE( u0__char_t, 0x2 );                        
        };                                       
                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m02 u0__char_t               _char;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Char
        _m03 uint16_t                 attributes;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Attributes
                                                 
        SDK_NONVOL_PROPERTIES( "_CHAR_INFO.$", 0x4, true, 0x4c771697530c61a0 );           
        SDK_FIXED_SIZE( char_info_t, 0x4 );           
    };                                           
};
#include "magic/char_info_t.end.hpp"
SDK_VERIFY( union win::char_info_t::u0__char_t, 0x2 );
SDK_VERIFY( struct win::char_info_t, 0x4 );
