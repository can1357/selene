#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/monitorinfo_t.start.hpp"
namespace tag
{
    // [struct tagMONITORINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitorinfo_t                   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                 
        _m00 uint32_t           cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t rc_monitor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcMonitor
        _m02 struct tag::rect_t rc_work;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcWork
        _m03 uint32_t           dw_flags;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwFlags
                                           
        SDK_MAGIC_PROPERTIES( "tagMONITORINFO.$", 0x28, true, 0xc9bf5e396229f362 );           
        SDK_FIXED_SIZE( monitorinfo_t, 0x28 );           
    };                                     
};
#include "magic/monitorinfo_t.end.hpp"
SDK_VERIFY( struct tag::monitorinfo_t, 0x28 );
