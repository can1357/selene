#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRestrictedErrorInfoInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_restricted_error_info_internal_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "IRestrictedErrorInfoInternal.$", 0x8, true, 0xa44fbfcb3472b507 );
        SDK_FIXED_SIZE( i_restricted_error_info_internal_t, 0x8 );
    };                                       
};
SDK_VERIFY( struct win::i_restricted_error_info_internal_t, 0x8 );
