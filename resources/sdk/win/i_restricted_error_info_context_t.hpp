#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRestrictedErrorInfoContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_restricted_error_info_context_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IRestrictedErrorInfoContext.$", 0x8, true, 0xa3c09dde18518a0f );
        SDK_FIXED_SIZE( i_restricted_error_info_context_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_restricted_error_info_context_t, 0x8 );
