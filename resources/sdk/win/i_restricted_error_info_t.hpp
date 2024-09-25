#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRestrictedErrorInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_restricted_error_info_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IRestrictedErrorInfo.$", 0x8, true, 0x7fc3fa9d864b969 );
        SDK_FIXED_SIZE( i_restricted_error_info_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_restricted_error_info_t, 0x8 );
