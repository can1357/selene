#pragma once
#include <sdkgen/support_library.hpp>
#include "points_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/gestureinfo_t.start.hpp"
namespace tag
{
    // [struct tagGESTUREINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gestureinfo_t                         
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                       
        _m00 uint32_t             cb_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t             dw_flags;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t             dw_id;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwID
        _m03 struct win::hwnd_t*  hwnd_target;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hwndTarget
        _m04 struct tag::points_t pts_location;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ptsLocation
        _m05 uint32_t             dw_instance_id;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwInstanceID
        _m06 uint32_t             dw_sequence_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwSequenceID
        _m07 uint64_t             ull_arguments;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullArguments
        _m08 uint32_t             cb_extra_args;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cbExtraArgs
                                                 
        SDK_MAGIC_PROPERTIES( "tagGESTUREINFO.$", 0x38, true, 0x3fc2b615b27cdfde );               
        SDK_FIXED_SIZE( gestureinfo_t, 0x38 );               
    };                                           
};
#include "magic/gestureinfo_t.end.hpp"
SDK_VERIFY( struct tag::gestureinfo_t, 0x38 );
