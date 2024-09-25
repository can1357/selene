#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDropSourceNotify]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_drop_source_notify_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IDropSourceNotify.$", 0x8, true, 0xfa5920acfe642866 );
        SDK_FIXED_SIZE( i_drop_source_notify_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_drop_source_notify_t, 0x8 );
