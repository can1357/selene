#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dlgtemplate_t.start.hpp"
namespace win
{
    // [struct DLGTEMPLATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dlgtemplate_t                
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t style;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .style
        _m01 uint32_t dw_extended_style;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwExtendedStyle
        _m02 uint16_t cdit;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cdit
        _m03 int16_t  x;                  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .x
        _m04 int16_t  y;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .y
        _m05 int16_t  cx;                 //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .cx
        _m06 int16_t  cy;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cy
                                        
        SDK_MAGIC_PROPERTIES( "DLGTEMPLATE.$", 0x12, true, 0xe08cdb220549cbc0 );                  
        SDK_FIXED_SIZE( dlgtemplate_t, 0x12 );                  
    };                                  
};
#include "magic/dlgtemplate_t.end.hpp"
SDK_VERIFY( struct win::dlgtemplate_t, 0x12 );
