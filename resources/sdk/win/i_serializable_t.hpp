#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISerializable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_serializable_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "ISerializable.$", 0x8, true, 0xe180fdb75838cf84 );
        SDK_FIXED_SIZE( i_serializable_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_serializable_t, 0x8 );
