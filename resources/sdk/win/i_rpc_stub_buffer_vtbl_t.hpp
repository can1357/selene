#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/i_rpc_stub_buffer_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_rpc_stub_buffer_t;
    struct i_rpc_channel_buffer_t;

    // [struct IRpcStubBufferVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_stub_buffer_vtbl_t                                               
    {                                                                             
        using query_interface_t =                                        sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t*, void**)>*;                             
        using add_ref_t =                                                sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*;                             
        using release_t =                                                sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*;                             
        using ndr_fwd_c_std_stub_buffer_connect_t =                      sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct win::i_unknown_t*)>*;                             
        using ndr_fwd_c_std_stub_buffer_disconnect_t =                   sdk::function<void(struct win::i_rpc_stub_buffer_t*)>*;                             
        using ndr_fwd_c_std_stub_buffer_invoke_t =                       sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct tag::rpcolemessage_t*, struct win::i_rpc_channel_buffer_t*)>*;                             
        using is_iid_supported_t =                                       sdk::function<struct win::i_rpc_stub_buffer_t*(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t*)>*;                             
        using count_refs_t =                                             sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*;                             
        using ndr_fwd_c_std_stub_buffer_debug_server_query_interface_t = sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, void**)>*;                             
        using debug_server_query_interface_t =                           ndr_fwd_c_std_stub_buffer_debug_server_query_interface_t ;                             
        using ndr_fwd_c_std_stub_buffer_debug_server_release_t =         sdk::function<void(struct win::i_rpc_stub_buffer_t*, void*)>*;                             
        using debug_server_release_t =                                   ndr_fwd_c_std_stub_buffer_debug_server_release_t ;                             
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                        
        _m00 query_interface_t                       query_interface;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                               add_ref;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                               release;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 ndr_fwd_c_std_stub_buffer_connect_t     connect;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Connect
        _m04 ndr_fwd_c_std_stub_buffer_disconnect_t  disconnect;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Disconnect
        _m05 ndr_fwd_c_std_stub_buffer_invoke_t      invoke;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Invoke
        _m06 is_iid_supported_t                      is_iid_supported;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IsIIDSupported
        _m07 count_refs_t                            count_refs;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CountRefs
        _m08 debug_server_query_interface_t          debug_server_query_interface;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DebugServerQueryInterface
        _m09 debug_server_release_t                  debug_server_release;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DebugServerRelease
                                                                                  
        SDK_MAGIC_PROPERTIES( "IRpcStubBufferVtbl.$", 0x50, true, 0x52a88a2d8e0692f4 );                             
        SDK_FIXED_SIZE( i_rpc_stub_buffer_vtbl_t, 0x50 );                             
    };                                                                            
};
#include "magic/i_rpc_stub_buffer_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_rpc_stub_buffer_vtbl_t, 0x50 );
