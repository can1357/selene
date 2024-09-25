#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hwnd_t; }

#include "magic/trackmouseevent_t.start.hpp"
namespace tag
{
    // [struct tagTRACKMOUSEEVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trackmouseevent_t                   
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                     
        _m00 uint32_t            cb_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t            dw_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 struct win::hwnd_t* hwnd_track;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndTrack
        _m03 uint32_t            dw_hover_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwHoverTime
                                               
        SDK_MAGIC_PROPERTIES( "tagTRACKMOUSEEVENT.$", 0x18, true, 0x385f754c34e7e06e );              
        SDK_FIXED_SIZE( trackmouseevent_t, 0x18 );              
    };                                         
};
#include "magic/trackmouseevent_t.end.hpp"
SDK_VERIFY( struct tag::trackmouseevent_t, 0x18 );
