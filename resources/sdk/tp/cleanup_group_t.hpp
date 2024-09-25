#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_CLEANUP_GROUP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cleanup_group_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "_TP_CLEANUP_GROUP.$", 0x0, true, 0xdd585fa3a082b37d );
        SDK_FIXED_SIZE( cleanup_group_t, 0x0 );
    };                    
};
SDK_VERIFY( struct tp::cleanup_group_t, 0x0 );
