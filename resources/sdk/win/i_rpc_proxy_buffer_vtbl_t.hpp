#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_rpc_proxy_buffer_vtbl_t.start.hpp"
namespace win
{
    struct i_rpc_proxy_buffer_t;
    struct i_rpc_channel_buffer_t;

    // [struct IRpcProxyBufferVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_proxy_buffer_vtbl_t            
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_rpc_proxy_buffer_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_rpc_proxy_buffer_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_rpc_proxy_buffer_t*)>*;                
        using connect_t =         sdk::function<sdk::hresult(struct win::i_rpc_proxy_buffer_t*, struct win::i_rpc_channel_buffer_t*)>*;                
        using disconnect_t =      sdk::function<void(struct win::i_rpc_proxy_buffer_t*)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 connect_t          connect;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Connect
        _m04 disconnect_t       disconnect;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Disconnect
                                                
        SDK_MAGIC_PROPERTIES( "IRpcProxyBufferVtbl.$", 0x28, true, 0x3a8762c573636895 );                
        SDK_FIXED_SIZE( i_rpc_proxy_buffer_vtbl_t, 0x28 );                
    };                                          
};
#include "magic/i_rpc_proxy_buffer_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_rpc_proxy_buffer_vtbl_t, 0x28 );
