#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct driver_object_t; }
namespace nt { struct irp_t;           }

#include "magic/hidclass_driver_extension_t.start.hpp"
namespace hid
{
    // [struct _HIDCLASS_DRIVER_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hidclass_driver_extension_t                         
    {                                                          
        using major_function_t = sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>;                      
        using add_device_t =     sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*;                      
        using driver_unload_t =  sdk::function<void(struct nt::driver_object_t*)>*;                      
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 struct nt::driver_object_t* minidriver_object;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MinidriverObject
        _m01 nt::unicode_view            registry_path;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RegistryPath
        _m02 uint32_t                    device_extension_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceExtensionSize
        _m03 major_function_t            major_function;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MajorFunction
        _m04 add_device_t                add_device;             //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .AddDevice
        _m05 driver_unload_t             driver_unload;          //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .DriverUnload
        _m06 int32_t                     reference_count;        //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .ReferenceCount
        _m07 nt::list_entry_t            list_entry;             //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .ListEntry
        _m08 uint8_t                     devices_are_polled;     //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .DevicesArePolled
        _m09 uint8_t                     fast_resume_disabled;   //{ +0x0129    +0x0129    +0x0129    +0x0129    } | .FastResumeDisabled
                                                               
        SDK_MAGIC_PROPERTIES( "_HIDCLASS_DRIVER_EXTENSION.$", 0x130, true, 0xf1b5c8d1a071142b );                      
        SDK_FIXED_SIZE( hidclass_driver_extension_t, 0x130 );                      
    };                                                         
};
#include "magic/hidclass_driver_extension_t.end.hpp"
SDK_VERIFY( struct hid::hidclass_driver_extension_t, 0x130 );
