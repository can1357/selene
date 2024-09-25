#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t;     }
namespace wdf { struct wdffileobject_t; }
namespace wdf { struct wdfrequest_t;    }

#include "magic/file_object_file_create_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxFileObjectFileCreate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class file_object_file_create_t                        
    {                                                      
        using pfn_wdf_device_file_create_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfrequest_t*, struct wdf::wdffileobject_t*)>*;                
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 class fx::callback_lock_t*    m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
        _m01 pfn_wdf_device_file_create_t  method;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Method
                                                           
        SDK_MAGIC_PROPERTIES( "FxFileObjectFileCreate.$", 0x10, true, 0xeeee019777d96b89 );                
        SDK_FIXED_SIZE( file_object_file_create_t, 0x10 );                
    };                                                     
};
#include "magic/file_object_file_create_t.end.hpp"
SDK_VERIFY( class fx::file_object_file_create_t, 0x10 );
