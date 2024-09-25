#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPropertyBag]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_property_bag_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IPropertyBag.$", 0x8, true, 0x7ca342546606717 );
        SDK_FIXED_SIZE( i_property_bag_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_property_bag_t, 0x8 );
