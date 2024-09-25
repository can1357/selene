#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeComp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_comp_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "ITypeComp.$", 0x8, true, 0x3d55d08e55bd5198 );
        SDK_FIXED_SIZE( i_type_comp_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_type_comp_t, 0x8 );
