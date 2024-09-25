#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

#include "magic/monitorinfoexw_t.start.hpp"
namespace tag
{
    // [struct tagMONITORINFOEXW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct monitorinfoexw_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint32_t                cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t      rc_monitor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcMonitor
        _m02 struct tag::rect_t      rc_work;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcWork
        _m03 uint32_t                dw_flags;    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwFlags
        _m04 sdk::array<wchar_t, 32> sz_device;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .szDevice
                                                
        SDK_MAGIC_PROPERTIES( "tagMONITORINFOEXW.$", 0x68, true, 0xdfd236de2c40dc );           
        SDK_FIXED_SIZE( monitorinfoexw_t, 0x68 );           
    };                                          
};
#include "magic/monitorinfoexw_t.end.hpp"
SDK_VERIFY( struct tag::monitorinfoexw_t, 0x68 );
