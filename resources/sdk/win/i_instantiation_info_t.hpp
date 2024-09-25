#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInstantiationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_instantiation_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IInstantiationInfo.$", 0x8, true, 0x799aa15b4ab21385 );
        SDK_FIXED_SIZE( i_instantiation_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_instantiation_info_t, 0x8 );
