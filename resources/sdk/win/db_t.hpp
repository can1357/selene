#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _DB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct db_t
    {          
               
        SDK_MAGIC_PROPERTIES( "_DB.$", 0x0, true, 0xcaf8d546ad7bb8bc );
        SDK_FIXED_SIZE( db_t, 0x0 );
    };         
};
SDK_VERIFY( struct win::db_t, 0x0 );
