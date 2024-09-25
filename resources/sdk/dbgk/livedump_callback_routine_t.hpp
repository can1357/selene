#pragma once
#include <sdkgen/support_library.hpp>

namespace dbgk
{
    // [struct _DBGK_LIVEDUMP_CALLBACK_ROUTINE]
    // => WDK 10
    //
    struct livedump_callback_routine_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_DBGK_LIVEDUMP_CALLBACK_ROUTINE.$", 0x0, false, 0x2c5d7d1e0df49e39 );
        SDK_FIXED_SIZE( livedump_callback_routine_t, 0x0 );
    };                                
};
SDK_VERIFY( struct dbgk::livedump_callback_routine_t, 0x0 );
