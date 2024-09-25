#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/scrollbarinfo_t.start.hpp"
namespace tag
{
    // [struct tagSCROLLBARINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrollbarinfo_t                           
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t      rc_scroll_bar;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcScrollBar
        _m02 int32_t                 dxy_line_button;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dxyLineButton
        _m03 int32_t                 xy_thumb_top;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .xyThumbTop
        _m04 int32_t                 xy_thumb_bottom;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .xyThumbBottom
        _m05 sdk::array<uint32_t, 6> rgstate;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .rgstate
                                                     
        SDK_MAGIC_PROPERTIES( "tagSCROLLBARINFO.$", 0x3c, true, 0x9c882d8a7e0bd821 );                
        SDK_FIXED_SIZE( scrollbarinfo_t, 0x3c );                
    };                                               
};
#include "magic/scrollbarinfo_t.end.hpp"
SDK_VERIFY( struct tag::scrollbarinfo_t, 0x3c );
