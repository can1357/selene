#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IErrorLog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_error_log_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "IErrorLog.$", 0x8, true, 0x922d253779dbbc4d );
        SDK_FIXED_SIZE( i_error_log_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_error_log_t, 0x8 );
