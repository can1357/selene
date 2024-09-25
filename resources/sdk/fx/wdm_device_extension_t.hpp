#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/remove_lock_t.hpp"

#include "magic/wdm_device_extension_t.start.hpp"
namespace fx
{
    // [struct FxWdmDeviceExtension]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdm_device_extension_t                              
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 struct io::remove_lock_t io_remove_lock;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoRemoveLock
        _m01 uint32_t                 remove_lock_option_flags;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RemoveLockOptionFlags
                                                               
        SDK_MAGIC_PROPERTIES( "FxWdmDeviceExtension.$", 0x28, true, 0xf22dcb23387e37d6 );                         
        SDK_FIXED_SIZE( wdm_device_extension_t, 0x28 );                         
    };                                                         
};
#include "magic/wdm_device_extension_t.end.hpp"
SDK_VERIFY( struct fx::wdm_device_extension_t, 0x28 );
