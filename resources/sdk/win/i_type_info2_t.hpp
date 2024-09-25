#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeInfo2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_info2_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "ITypeInfo2.$", 0x8, true, 0x5fdb46efe6ffa724 );
        SDK_FIXED_SIZE( i_type_info2_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_type_info2_t, 0x8 );
