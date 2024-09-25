#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_rpc_helper_t.start.hpp"
namespace win
{
    // [class CRpcHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_helper_t     
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t c_refs;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
                             
        SDK_MAGIC_PROPERTIES( "CRpcHelper.$", 0x10, true, 0x25fcdb714345cccd );       
        SDK_FIXED_SIZE( c_rpc_helper_t, 0x10 );       
    };                       
};
#include "magic/c_rpc_helper_t.end.hpp"
SDK_VERIFY( class win::c_rpc_helper_t, 0x10 );
