#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_class_info_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IOleClassInfo.$", 0x8, true, 0xc66a14d1deaaad46 );
        SDK_FIXED_SIZE( i_ole_class_info_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_ole_class_info_t, 0x8 );
