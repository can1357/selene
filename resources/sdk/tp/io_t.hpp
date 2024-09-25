#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_IO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_t
    {          
               
        SDK_MAGIC_PROPERTIES( "_TP_IO.$", 0x0, true, 0xa8c3702cb91db2ba );
        SDK_FIXED_SIZE( io_t, 0x0 );
    };         
};
SDK_VERIFY( struct tp::io_t, 0x0 );
