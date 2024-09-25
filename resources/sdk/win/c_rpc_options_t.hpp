#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_rpc_options_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_std_identity_t;

    // [class CRpcOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_options_t                             
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 class win::c_std_identity_t* p_std_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pStdId
        _m01 struct win::i_unknown_t*     p_unk_outer;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pUnkOuter
                                                      
        SDK_MAGIC_PROPERTIES( "CRpcOptions.$", 0x18, true, 0xbaf9e5d7d10929b6 );            
        SDK_FIXED_SIZE( c_rpc_options_t, 0x18 );            
    };                                                
};
#include "magic/c_rpc_options_t.end.hpp"
SDK_VERIFY( class win::c_rpc_options_t, 0x18 );
