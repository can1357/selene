#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/monitorinfoexa_t.start.hpp"
namespace tag
{
    // [struct tagMONITORINFOEXA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitorinfoexa_t                  
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                   
        _m00 uint32_t             cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t   rc_monitor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcMonitor
        _m02 struct tag::rect_t   rc_work;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcWork
        _m03 uint32_t             dw_flags;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwFlags
        _m04 sdk::array<char, 32> sz_device;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .szDevice
                                             
        SDK_MAGIC_PROPERTIES( "tagMONITORINFOEXA.$", 0x48, true, 0x8241d957d04bb7db );           
        SDK_FIXED_SIZE( monitorinfoexa_t, 0x48 );           
    };                                       
};
#include "magic/monitorinfoexa_t.end.hpp"
SDK_VERIFY( struct tag::monitorinfoexa_t, 0x48 );
