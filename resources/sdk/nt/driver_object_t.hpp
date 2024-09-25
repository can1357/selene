#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_object_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct driver_object_t;
    struct driver_extension_t;
    struct fast_io_dispatch_t;

    // [struct _DRIVER_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_object_t                                    
    {                                                         
        using pdriver_initialize_t = sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*;                  
        using driver_start_io_t =    sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*;                  
        using driver_unload_t =      sdk::function<void(struct nt::driver_object_t*)>*;                  
        using major_function_t =     sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>;                  
                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 int16_t                        type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t                        size;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::device_object_t*    device_object;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m03 uint32_t                       flags;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m04 void*                          driver_start;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DriverStart
        _m05 uint32_t                       driver_size;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DriverSize
        _m06 void*                          driver_section;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DriverSection
        _m07 struct nt::driver_extension_t* driver_extension;   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DriverExtension
        _m08 nt::unicode_view               driver_name;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DriverName
        _m09 nt::unicode_view*              hardware_database;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .HardwareDatabase
        _m10 struct nt::fast_io_dispatch_t* fast_io_dispatch;   //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .FastIoDispatch
        _m11 pdriver_initialize_t           driver_init;        //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .DriverInit
        _m12 driver_start_io_t              driver_start_io;    //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .DriverStartIo
        _m13 driver_unload_t                driver_unload;      //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .DriverUnload
        _m14 major_function_t               major_function;     //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .MajorFunction
                                                              
        SDK_NONVOL_PROPERTIES( "_DRIVER_OBJECT.$", 0x150, true, 0x9b0865cb2470713b );                  
        SDK_FIXED_SIZE( driver_object_t, 0x150 );                  
    };                                                        
};
#include "magic/driver_object_t.end.hpp"
SDK_VERIFY( struct nt::driver_object_t, 0x150 );
