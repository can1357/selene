#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_globals_v1_5_t.start.hpp"
namespace wdf
{
    struct wdfdriver_t;

    // [struct _WDF_DRIVER_GLOBALS_V1_5]
    // => Windows 10 v1607
    //
    struct driver_globals_v1_5_t                             
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 struct wdf::wdfdriver_t* driver;                  //{ +0x0000    } | .Driver
        _m01 uint32_t                 driver_flags;            //{ +0x0008    } | .DriverFlags
        _m02 uint32_t                 driver_tag;              //{ +0x000c    } | .DriverTag
        _m03 sdk::array<char, 32>     driver_name;             //{ +0x0010    } | .DriverName
        _m04 uint8_t                  displace_driver_unload;  //{ +0x0030    } | .DisplaceDriverUnload
                                                             
        SDK_MAGIC_PROPERTIES( "_WDF_DRIVER_GLOBALS_V1_5.$", 0x0, false, 0xac47b2081f699676 );                       
        SDK_FIXED_SIZE( driver_globals_v1_5_t, 0x38 );                       
    };                                                       
};
#include "magic/driver_globals_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::driver_globals_v1_5_t, 0x38 );
