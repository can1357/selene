#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDropSource]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_drop_source_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IDropSource.$", 0x8, true, 0x34a8792c317d5a01 );
        SDK_FIXED_SIZE( i_drop_source_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_drop_source_t, 0x8 );
