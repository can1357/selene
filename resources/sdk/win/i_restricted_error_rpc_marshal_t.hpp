#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRestrictedErrorRpcMarshal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_restricted_error_rpc_marshal_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IRestrictedErrorRpcMarshal.$", 0x8, true, 0x823f7c990fc1ba81 );
        SDK_FIXED_SIZE( i_restricted_error_rpc_marshal_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_restricted_error_rpc_marshal_t, 0x8 );
