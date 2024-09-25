#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IReplaceClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_replace_class_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IReplaceClassInfo.$", 0x8, true, 0x6f1562dd8bfe08f );
        SDK_FIXED_SIZE( i_replace_class_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_replace_class_info_t, 0x8 );
