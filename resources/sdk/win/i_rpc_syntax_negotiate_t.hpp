#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcSyntaxNegotiate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_syntax_negotiate_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IRpcSyntaxNegotiate.$", 0x8, true, 0x3c3487a768f9e486 );
        SDK_FIXED_SIZE( i_rpc_syntax_negotiate_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_rpc_syntax_negotiate_t, 0x8 );
