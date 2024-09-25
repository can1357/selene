#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/startupinfoa_t.start.hpp"
namespace win
{
    // [struct _STARTUPINFOA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct startupinfoa_t               
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t cb;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 char*    lp_reserved;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpReserved
        _m02 char*    lp_desktop;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpDesktop
        _m03 char*    lp_title;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpTitle
        _m04 uint32_t dw_x;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwX
        _m05 uint32_t dw_y;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwY
        _m06 uint32_t dw_x_size;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwXSize
        _m07 uint32_t dw_y_size;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwYSize
        _m08 uint32_t dw_x_count_chars;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwXCountChars
        _m09 uint32_t dw_y_count_chars;   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwYCountChars
        _m10 uint32_t dw_fill_attribute;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwFillAttribute
        _m11 uint32_t dw_flags;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwFlags
        _m12 uint16_t w_show_window;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .wShowWindow
        _m13 uint16_t cb_reserved2;       //{ +0x0042    +0x0042    +0x0042    +0x0042    } | .cbReserved2
        _m14 uint8_t* lp_reserved2;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .lpReserved2
        _m15 void*    h_std_input;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .hStdInput
        _m16 void*    h_std_output;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .hStdOutput
        _m17 void*    h_std_error;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .hStdError
                                        
        SDK_MAGIC_PROPERTIES( "_STARTUPINFOA.$", 0x68, true, 0x593094555eed189a );                  
        SDK_FIXED_SIZE( startupinfoa_t, 0x68 );                  
    };                                  
};
#include "magic/startupinfoa_t.end.hpp"
SDK_VERIFY( struct win::startupinfoa_t, 0x68 );
