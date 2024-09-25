#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _DEVICE_HANDLER_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_handler_object_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "_DEVICE_HANDLER_OBJECT.$", 0x0, true, 0xe9062d90cd13035e );
        SDK_FIXED_SIZE( device_handler_object_t, 0x0 );
    };                            
};
SDK_VERIFY( struct wdf::device_handler_object_t, 0x0 );
