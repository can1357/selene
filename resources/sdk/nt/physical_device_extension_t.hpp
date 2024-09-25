#pragma once
#include <sdkgen/support_library.hpp>
#include "common_device_extension_t.hpp"

#include "magic/physical_device_extension_t.start.hpp"
namespace nt
{
    struct device_object_t;
    struct class_private_pdo_data_t;

    // [struct _PHYSICAL_DEVICE_EXTENSION]
    // => WDK 10 (NV)
    //
    struct physical_device_extension_t                             
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                             version;           //{ +0x0000    } | .Version
        _m01 struct nt::device_object_t*          device_object;     //{ +0x0008    } | .DeviceObject
        _m02 struct nt::common_device_extension_t common_extension;  //{ +0x0000    } | .CommonExtension
        _m03 uint8_t                              is_missing;        //{ +0x0200    } | .IsMissing
        _m04 uint8_t                              is_enumerated;     //{ +0x0201    } | .IsEnumerated
        _m05 struct nt::class_private_pdo_data_t* private_pdo_data;  //{ +0x0208    } | .PrivatePdoData
                                                                   
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_DEVICE_EXTENSION.$", 0x0, false, 0x4a0bb4f0917737ed );                 
        SDK_FIXED_SIZE( physical_device_extension_t, 0x240 );                 
    };                                                             
};
#include "magic/physical_device_extension_t.end.hpp"
SDK_VERIFY( struct nt::physical_device_extension_t, 0x240 );
