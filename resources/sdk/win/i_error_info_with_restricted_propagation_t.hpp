#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IErrorInfoWithRestrictedPropagation]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_error_info_with_restricted_propagation_t
    {                                                
                                                     
        SDK_MAGIC_PROPERTIES( "IErrorInfoWithRestrictedPropagation.$", 0x8, true, 0x7399be7c50585369 );
        SDK_FIXED_SIZE( i_error_info_with_restricted_propagation_t, 0x8 );
    };                                               
};
SDK_VERIFY( struct win::i_error_info_with_restricted_propagation_t, 0x8 );
