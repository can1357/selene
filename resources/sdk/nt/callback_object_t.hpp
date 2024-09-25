#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CALLBACK_OBJECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct callback_object_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "_CALLBACK_OBJECT.$", 0x0, true, 0x9df05ca1878da421 );
        SDK_FIXED_SIZE( callback_object_t, 0x0 );
    };                      
};
SDK_VERIFY( struct nt::callback_object_t, 0x0 );
