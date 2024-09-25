#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPropertyStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_property_storage_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IPropertyStorage.$", 0x8, true, 0xb36444bb01d2c09a );
        SDK_FIXED_SIZE( i_property_storage_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_property_storage_t, 0x8 );
