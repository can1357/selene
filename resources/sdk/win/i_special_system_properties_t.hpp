#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISpecialSystemProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_special_system_properties_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "ISpecialSystemProperties.$", 0x8, true, 0x6d778292f58b733f );
        SDK_FIXED_SIZE( i_special_system_properties_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_special_system_properties_t, 0x8 );
