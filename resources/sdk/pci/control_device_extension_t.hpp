#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/control_device_extension_t.start.hpp"
namespace pci
{
    // [struct _CONTROL_DEVICE_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_device_extension_t                       
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                  
        _m00 uint32_t            signature;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 struct nt::kevent_t proxy_device_lock;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProxyDeviceLock
        _m02 uint32_t            byte_size;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ByteSize
        _m03 wchar_t*            multi_sz_proxy_device_path;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MultiSzProxyDevicePath
                                                            
        SDK_MAGIC_PROPERTIES( "_CONTROL_DEVICE_EXTENSION.$", 0x30, true, 0xe8f91726c87886d9 );                           
        SDK_FIXED_SIZE( control_device_extension_t, 0x30 );                           
    };                                                      
};
#include "magic/control_device_extension_t.end.hpp"
SDK_VERIFY( struct pci::control_device_extension_t, 0x30 );
