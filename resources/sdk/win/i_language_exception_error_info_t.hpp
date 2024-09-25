#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILanguageExceptionErrorInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_language_exception_error_info_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "ILanguageExceptionErrorInfo.$", 0x8, true, 0xc90a16d1cc55018b );
        SDK_FIXED_SIZE( i_language_exception_error_info_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_language_exception_error_info_t, 0x8 );
