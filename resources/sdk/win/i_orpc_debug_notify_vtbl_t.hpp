#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_orpc_debug_notify_vtbl_t.start.hpp"
namespace win
{
    struct orpc_dbg_all_t;
    struct i_orpc_debug_notify_t;

    // [struct IOrpcDebugNotifyVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_orpc_debug_notify_vtbl_t                         
    {                                                         
        using query_interface_t =        sdk::function<sdk::hresult(struct win::i_orpc_debug_notify_t*, const struct nt::guid_t const*, void**)>*;                       
        using add_ref_t =                sdk::function<uint32_t(struct win::i_orpc_debug_notify_t*)>*;                       
        using release_t =                sdk::function<uint32_t(struct win::i_orpc_debug_notify_t*)>*;                       
        using client_get_buffer_size_t = sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
        using client_fill_buffer_t =     sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
        using client_notify_t =          sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
        using server_notify_t =          sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
        using server_get_buffer_size_t = sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
        using server_fill_buffer_t =     sdk::function<void(struct win::i_orpc_debug_notify_t*, struct win::orpc_dbg_all_t*)>*;                       
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 query_interface_t         query_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                 add_ref;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                 release;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 client_get_buffer_size_t  client_get_buffer_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientGetBufferSize
        _m04 client_fill_buffer_t      client_fill_buffer;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientFillBuffer
        _m05 client_notify_t           client_notify;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientNotify
        _m06 server_notify_t           server_notify;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ServerNotify
        _m07 server_get_buffer_size_t  server_get_buffer_size;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ServerGetBufferSize
        _m08 server_fill_buffer_t      server_fill_buffer;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ServerFillBuffer
                                                              
        SDK_MAGIC_PROPERTIES( "IOrpcDebugNotifyVtbl.$", 0x48, true, 0xcf4862ce40d50378 );                       
        SDK_FIXED_SIZE( i_orpc_debug_notify_vtbl_t, 0x48 );                       
    };                                                        
};
#include "magic/i_orpc_debug_notify_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_orpc_debug_notify_vtbl_t, 0x48 );
