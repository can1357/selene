#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/drawtextparams_t.start.hpp"
namespace tag
{
    // [struct tagDRAWTEXTPARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct drawtextparams_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t  i_tab_length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iTabLength
        _m02 int32_t  i_left_margin;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iLeftMargin
        _m03 int32_t  i_right_margin;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iRightMargin
        _m04 uint32_t ui_length_drawn;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uiLengthDrawn
                                      
        SDK_MAGIC_PROPERTIES( "tagDRAWTEXTPARAMS.$", 0x14, true, 0x11bc75f3a2c8c6d0 );                
        SDK_FIXED_SIZE( drawtextparams_t, 0x14 );                
    };                                
};
#include "magic/drawtextparams_t.end.hpp"
SDK_VERIFY( struct tag::drawtextparams_t, 0x14 );
