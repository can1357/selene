#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/console_readconsole_control_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_READCONSOLE_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_readconsole_control_t   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t n_length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nLength
        _m01 uint32_t n_initial_chars;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .nInitialChars
        _m02 uint32_t dw_ctrl_wakeup_mask;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCtrlWakeupMask
        _m03 uint32_t dw_control_key_state;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwControlKeyState
                                           
        SDK_MAGIC_PROPERTIES( "_CONSOLE_READCONSOLE_CONTROL.$", 0x10, true, 0x72113e09624b68e9 );                     
        SDK_FIXED_SIZE( console_readconsole_control_t, 0x10 );                     
    };                                     
};
#include "magic/console_readconsole_control_t.end.hpp"
SDK_VERIFY( struct win::console_readconsole_control_t, 0x10 );
