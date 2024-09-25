#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/device_extension_t.start.hpp"
namespace hid
{
    // [struct _HID_DEVICE_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_extension_t                                   
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                      
        _m00 struct nt::device_object_t* physical_device_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalDeviceObject
        _m01 struct nt::device_object_t* next_device_object;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextDeviceObject
        _m02 void*                       mini_device_extension;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniDeviceExtension
                                                                
        SDK_MAGIC_PROPERTIES( "_HID_DEVICE_EXTENSION.$", 0x18, true, 0xe28dc8515f1d4e1 );                       
        SDK_FIXED_SIZE( device_extension_t, 0x18 );                       
    };                                                          
};
#include "magic/device_extension_t.end.hpp"
SDK_VERIFY( struct hid::device_extension_t, 0x18 );
