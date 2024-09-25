#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_event_record_t.start.hpp"
namespace win
{
    // [struct _KEY_EVENT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_event_record_t                              
    {                                                      
        union u0_u_char_t                                  
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m04 wchar_t unicode_char;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UnicodeChar
            _m05 char    ascii_char;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsciiChar
                                                           
            SDK_MAGIC_PROPERTIES( "_KEY_EVENT_RECORD.uChar.$", 0x2, true, 0x52a3d2fc0ccc73dc );                                  
            SDK_FIXED_SIZE( u0_u_char_t, 0x2 );                                  
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 int32_t                  b_key_down;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bKeyDown
        _m01 uint16_t                 w_repeat_count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wRepeatCount
        _m02 uint16_t                 w_virtual_key_code;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wVirtualKeyCode
        _m03 uint16_t                 w_virtual_scan_code;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wVirtualScanCode
        _m06 u0_u_char_t              u_char;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .uChar
        _m07 uint32_t                 dw_control_key_state;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwControlKeyState
                                                           
        SDK_MAGIC_PROPERTIES( "_KEY_EVENT_RECORD.$", 0x10, true, 0x6db5a048e06fb649 );                     
        SDK_FIXED_SIZE( key_event_record_t, 0x10 );                     
    };                                                     
};
#include "magic/key_event_record_t.end.hpp"
SDK_VERIFY( union win::key_event_record_t::u0_u_char_t, 0x2 );
SDK_VERIFY( struct win::key_event_record_t, 0x10 );
