#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dlgitemtemplate_t.start.hpp"
namespace win
{
    // [struct DLGITEMTEMPLATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dlgitemtemplate_t            
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t style;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .style
        _m01 uint32_t dw_extended_style;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwExtendedStyle
        _m02 int16_t  x;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .x
        _m03 int16_t  y;                  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .y
        _m04 int16_t  cx;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cx
        _m05 int16_t  cy;                 //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .cy
        _m06 uint16_t id;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .id
                                        
        SDK_MAGIC_PROPERTIES( "DLGITEMTEMPLATE.$", 0x12, true, 0x89b381b82ed0e750 );                  
        SDK_FIXED_SIZE( dlgitemtemplate_t, 0x12 );                  
    };                                  
};
#include "magic/dlgitemtemplate_t.end.hpp"
SDK_VERIFY( struct win::dlgitemtemplate_t, 0x12 );
