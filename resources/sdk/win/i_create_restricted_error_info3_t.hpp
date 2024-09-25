#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICreateRestrictedErrorInfo3]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_create_restricted_error_info3_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "ICreateRestrictedErrorInfo3.$", 0x8, true, 0x9c5f0054ae35101c );
        SDK_FIXED_SIZE( i_create_restricted_error_info3_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_create_restricted_error_info3_t, 0x8 );
