#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/i_async_rpc_channel_buffer_vtbl_t.start.hpp"
namespace win
{
    struct i_synchronize_t;
    struct i_async_rpc_channel_buffer_t;

    // [struct IAsyncRpcChannelBufferVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_rpc_channel_buffer_vtbl_t              
    {                                                     
        using query_interface_t =      sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, const struct nt::guid_t&, void**)>*;                     
        using add_ref_t =              sdk::function<uint32_t(struct win::i_async_rpc_channel_buffer_t*)>*;                     
        using release_t =              sdk::function<uint32_t(struct win::i_async_rpc_channel_buffer_t*)>*;                     
        using get_buffer_t =           sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, const struct nt::guid_t&)>*;                     
        using send_receive_t =         sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*)>*;                     
        using free_buffer_t =          sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*)>*;                     
        using get_dest_ctx_t =         sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, uint32_t*, void**)>*;                     
        using is_connected_t =         sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*)>*;                     
        using get_protocol_version_t = sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, uint32_t*)>*;                     
        using send_t =                 sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, struct win::i_synchronize_t*, uint32_t*)>*;                     
        using receive_t =              sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*)>*;                     
        using get_dest_ctx_ex_t =      sdk::function<sdk::hresult(struct win::i_async_rpc_channel_buffer_t*, struct tag::rpcolemessage_t*, uint32_t*, void**)>*;                     
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 query_interface_t       query_interface;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t               add_ref;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t               release;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_buffer_t            get_buffer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetBuffer
        _m04 send_receive_t          send_receive;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SendReceive
        _m05 free_buffer_t           free_buffer;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeBuffer
        _m06 get_dest_ctx_t          get_dest_ctx;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetDestCtx
        _m07 is_connected_t          is_connected;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IsConnected
        _m08 get_protocol_version_t  get_protocol_version;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetProtocolVersion
        _m09 send_t                  send;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Send
        _m10 receive_t               receive;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Receive
        _m11 get_dest_ctx_ex_t       get_dest_ctx_ex;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GetDestCtxEx
                                                          
        SDK_MAGIC_PROPERTIES( "IAsyncRpcChannelBufferVtbl.$", 0x60, true, 0xddf28d7bfe2e3bf0 );                     
        SDK_FIXED_SIZE( i_async_rpc_channel_buffer_vtbl_t, 0x60 );                     
    };                                                    
};
#include "magic/i_async_rpc_channel_buffer_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_async_rpc_channel_buffer_vtbl_t, 0x60 );
