#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILanguageExceptionErrorInfo2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_language_exception_error_info2_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "ILanguageExceptionErrorInfo2.$", 0x8, true, 0x1abff714259cfe6a );
        SDK_FIXED_SIZE( i_language_exception_error_info2_t, 0x8 );
    };                                       
};
SDK_VERIFY( struct win::i_language_exception_error_info2_t, 0x8 );
