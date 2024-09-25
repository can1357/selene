#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct driver_object_t; }

#include "magic/boot_device_registration_t.start.hpp"
namespace ex
{
    // [struct _EX_BOOT_DEVICE_REGISTRATION]
    // => WDK 10 (NV)
    //
    struct boot_device_registration_t                         
    {                                                         
        using pex_is_boot_device_ready_t = sdk::function<uint8_t(struct nt::device_object_t*, void*)>*;                     
                                                              
        // WDK 10                                             
        //                                                    
        _m00 uint32_t                    version;               //{ +0x0000    } | .Version
        _m01 uint32_t                    flags;                 //{ +0x0004    } | .Flags
        _m02 struct nt::driver_object_t* driver_object;         //{ +0x0008    } | .DriverObject
        _m03 struct nt::device_object_t* device_object;         //{ +0x0010    } | .DeviceObject
        _m04 pex_is_boot_device_ready_t  is_boot_device_ready;  //{ +0x0018    } | .IsBootDeviceReady
        _m05 void*                       context;               //{ +0x0020    } | .Context
                                                              
        SDK_NONVOL_PROPERTIES( "_EX_BOOT_DEVICE_REGISTRATION.$", 0x0, false, 0x745f4a1125731974 );                     
        SDK_FIXED_SIZE( boot_device_registration_t, 0x28 );                     
    };                                                        
};
#include "magic/boot_device_registration_t.end.hpp"
SDK_VERIFY( struct ex::boot_device_registration_t, 0x28 );
