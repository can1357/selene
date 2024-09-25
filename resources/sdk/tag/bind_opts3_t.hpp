#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct coserverinfo_t; }
namespace win { struct hwnd_t;         }

#include "magic/bind_opts3_t.start.hpp"
namespace tag
{
    // [struct tagBIND_OPTS3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_opts3_t                                         
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                      
        _m00 uint32_t                    cb_struct;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStruct
        _m01 uint32_t                    grf_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .grfFlags
        _m02 uint32_t                    grf_mode;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .grfMode
        _m03 uint32_t                    dw_tick_count_deadline;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwTickCountDeadline
        _m04 uint32_t                    dw_track_flags;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwTrackFlags
        _m05 uint32_t                    dw_class_context;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwClassContext
        _m06 uint32_t                    locale;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .locale
        _m07 struct win::coserverinfo_t* p_server_info;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pServerInfo
        _m08 struct win::hwnd_t*         hwnd;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hwnd
                                                                
        SDK_MAGIC_PROPERTIES( "tagBIND_OPTS3.$", 0x30, true, 0x3438574348448e64 );                       
        SDK_FIXED_SIZE( bind_opts3_t, 0x30 );                       
    };                                                          
};
#include "magic/bind_opts3_t.end.hpp"
SDK_VERIFY( struct tag::bind_opts3_t, 0x30 );
