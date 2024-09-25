#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISupportErrorInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_support_error_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ISupportErrorInfo.$", 0x8, true, 0xe16f7f74e7ed700d );
        SDK_FIXED_SIZE( i_support_error_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_support_error_info_t, 0x8 );
