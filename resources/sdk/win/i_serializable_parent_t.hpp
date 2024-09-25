#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISerializableParent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_serializable_parent_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "ISerializableParent.$", 0x8, true, 0x532a51fafc7e2801 );
        SDK_FIXED_SIZE( i_serializable_parent_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_serializable_parent_t, 0x8 );
