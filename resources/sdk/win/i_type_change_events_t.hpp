#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeChangeEvents]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_change_events_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ITypeChangeEvents.$", 0x8, true, 0x6190022f1bf6abd5 );
        SDK_FIXED_SIZE( i_type_change_events_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_type_change_events_t, 0x8 );
