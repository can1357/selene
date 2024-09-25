#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irp_dynamic_dispatch_info_t.start.hpp"
namespace fx
{
    struct cx_device_info_t;

    // [struct FxIrpDynamicDispatchInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_dynamic_dispatch_info_t                   
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                               
        _m00 nt::list_entry_t             list_entry;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct fx::cx_device_info_t* cx_device_info;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CxDeviceInfo
                                                         
        SDK_MAGIC_PROPERTIES( "FxIrpDynamicDispatchInfo.$", 0x58, true, 0x42b2709a5ca982fd );               
        SDK_FIXED_SIZE( irp_dynamic_dispatch_info_t, 0x58 );               
    };                                                   
};
#include "magic/irp_dynamic_dispatch_info_t.end.hpp"
SDK_VERIFY( struct fx::irp_dynamic_dispatch_info_t, 0x58 );
