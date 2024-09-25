#pragma once
#include <sdkgen/support_library.hpp>
#include "fdo_extension_t.hpp"
#include "pdo_extension_t.hpp"
#include "device_extension_t.hpp"

#include "magic/hidclass_device_extension_t.start.hpp"
namespace hid
{
    // [struct _HIDCLASS_DEVICE_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hidclass_device_extension_t                    
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 struct hid::device_extension_t hid_ext;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hidExt
        _m01 uint8_t                        is_client_pdo;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .isClientPdo
        _m02 uint32_t                       signature;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Signature
        _m03 struct hid::fdo_extension_t    fdo_ext;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fdoExt
        _m04 struct hid::pdo_extension_t    pdo_ext;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pdoExt
                                                          
        SDK_MAGIC_PROPERTIES( "_HIDCLASS_DEVICE_EXTENSION.$", 0x870, true, 0xf15a3d4c39bf5a26 );              
        SDK_DYNAMIC_SIZE( hidclass_device_extension_t );              
    };                                                    
};
#include "magic/hidclass_device_extension_t.end.hpp"
