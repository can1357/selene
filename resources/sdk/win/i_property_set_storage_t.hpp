#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPropertySetStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_property_set_storage_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IPropertySetStorage.$", 0x8, true, 0x4ac98fc288137f5 );
        SDK_FIXED_SIZE( i_property_set_storage_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_property_set_storage_t, 0x8 );
