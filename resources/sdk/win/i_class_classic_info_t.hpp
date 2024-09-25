#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClassClassicInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_classic_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IClassClassicInfo.$", 0x8, true, 0xc026bccf07fb34d6 );
        SDK_FIXED_SIZE( i_class_classic_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_class_classic_info_t, 0x8 );
