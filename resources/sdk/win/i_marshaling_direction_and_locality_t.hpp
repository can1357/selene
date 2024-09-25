#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMarshalingDirectionAndLocality]
    // => Windows 10 v1607
    //
    struct i_marshaling_direction_and_locality_t
    {                                           
                                                
        SDK_MAGIC_PROPERTIES( "IMarshalingDirectionAndLocality.$", 0x0, false, 0x5b5fd23dd1f38398 );
        SDK_FIXED_SIZE( i_marshaling_direction_and_locality_t, 0x8 );
    };                                          
};
SDK_VERIFY( struct win::i_marshaling_direction_and_locality_t, 0x8 );
