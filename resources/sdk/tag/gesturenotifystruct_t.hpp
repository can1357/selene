#pragma once
#include <sdkgen/support_library.hpp>
#include "points_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/gesturenotifystruct_t.start.hpp"
namespace tag
{
    // [struct tagGESTURENOTIFYSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gesturenotifystruct_t                 
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                       
        _m00 uint32_t             cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t             dw_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 struct win::hwnd_t*  hwnd_target;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hwndTarget
        _m03 struct tag::points_t pts_location;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ptsLocation
        _m04 uint32_t             dw_instance_id;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwInstanceID
                                                 
        SDK_MAGIC_PROPERTIES( "tagGESTURENOTIFYSTRUCT.$", 0x18, true, 0x282d94b81fc6e86b );               
        SDK_FIXED_SIZE( gesturenotifystruct_t, 0x18 );               
    };                                           
};
#include "magic/gesturenotifystruct_t.end.hpp"
SDK_VERIFY( struct tag::gesturenotifystruct_t, 0x18 );
