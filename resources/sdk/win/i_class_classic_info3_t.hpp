#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClassClassicInfo3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_classic_info3_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IClassClassicInfo3.$", 0x8, true, 0x1de0c0c2f6890486 );
        SDK_FIXED_SIZE( i_class_classic_info3_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_class_classic_info3_t, 0x8 );
