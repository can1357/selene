#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IErrorInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_error_info_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IErrorInfo.$", 0x8, true, 0x462dd66a980dec8f );
        SDK_FIXED_SIZE( i_error_info_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_error_info_t, 0x8 );
