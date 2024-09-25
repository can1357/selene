#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_globals_t.start.hpp"
namespace wdf
{
    struct wdfdriver_t;

    // [struct _WDF_DRIVER_GLOBALS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_globals_t                                  
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 struct wdf::wdfdriver_t* driver;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Driver
        _m01 uint32_t                 driver_flags;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverFlags
        _m02 uint32_t                 driver_tag;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DriverTag
        _m03 sdk::array<char, 32>     driver_name;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverName
        _m04 uint8_t                  displace_driver_unload;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DisplaceDriverUnload
                                                             
        SDK_NONVOL_PROPERTIES( "_WDF_DRIVER_GLOBALS.$", 0x38, true, 0xdb32e36ef76a1b1c );                       
        SDK_FIXED_SIZE( driver_globals_t, 0x38 );                       
    };                                                       
};
#include "magic/driver_globals_t.end.hpp"
SDK_VERIFY( struct wdf::driver_globals_t, 0x38 );
