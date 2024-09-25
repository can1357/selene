#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct driver_object_t; }
namespace nt { struct irp_t;           }

#include "magic/driver_io_callbacks_t.start.hpp"
namespace verf
{
    // [struct _VF_DRIVER_IO_CALLBACKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_io_callbacks_t                
    {                                           
        using driver_init_t =     sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*;                
        using driver_start_io_t = sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*;                
        using driver_unload_t =   sdk::function<void(struct nt::driver_object_t*)>*;                
        using add_device_t =      sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*;                
        using major_function_t =  sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 driver_init_t      driver_init;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverInit
        _m01 driver_start_io_t  driver_start_io;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DriverStartIo
        _m02 driver_unload_t    driver_unload;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverUnload
        _m03 add_device_t       add_device;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AddDevice
        _m04 major_function_t   major_function;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MajorFunction
                                                
        SDK_MAGIC_PROPERTIES( "_VF_DRIVER_IO_CALLBACKS.$", 0x100, true, 0xe659e32e9a1bb6ec );                
        SDK_FIXED_SIZE( driver_io_callbacks_t, 0x100 );                
    };                                          
};
#include "magic/driver_io_callbacks_t.end.hpp"
SDK_VERIFY( struct verf::driver_io_callbacks_t, 0x100 );
