#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateErrorInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_error_info_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICreateErrorInfo.$", 0x8, true, 0x293171c65b663fbb );
        SDK_FIXED_SIZE( i_create_error_info_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_create_error_info_t, 0x8 );
