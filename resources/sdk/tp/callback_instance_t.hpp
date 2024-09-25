#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_CALLBACK_INSTANCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct callback_instance_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_TP_CALLBACK_INSTANCE.$", 0x0, true, 0x60a3c2142ceab2cc );
        SDK_FIXED_SIZE( callback_instance_t, 0x0 );
    };                        
};
SDK_VERIFY( struct tp::callback_instance_t, 0x0 );
