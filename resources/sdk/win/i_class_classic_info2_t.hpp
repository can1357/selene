#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClassClassicInfo2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_classic_info2_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IClassClassicInfo2.$", 0x8, true, 0x9fc7d1e30d046fdb );
        SDK_FIXED_SIZE( i_class_classic_info2_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_class_classic_info2_t, 0x8 );
