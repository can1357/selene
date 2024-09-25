#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                 }
namespace rpc { struct message_t;              }
namespace win { struct i_rpc_channel_buffer_t; }
namespace win { struct i_rpc_stub_buffer_t;    }
namespace win { struct midl_server_info_t;     }

#include "magic/c_interface_stub_header_t.start.hpp"
namespace tag
{
    // [struct tagCInterfaceStubHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_interface_stub_header_t                                    
    {                                                                   
        using p_dispatch_table_t = sdk::function<void(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_channel_buffer_t*, struct rpc::message_t*, uint32_t*)> const**;                     
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 const struct nt::guid_t*              piid;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .piid
        _m01 const struct win::midl_server_info_t* p_server_info;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServerInfo
        _m02 uint32_t                              dispatch_table_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DispatchTableCount
        _m03 p_dispatch_table_t                    p_dispatch_table;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pDispatchTable
                                                                        
        SDK_MAGIC_PROPERTIES( "tagCInterfaceStubHeader.$", 0x20, true, 0xd395f71ae47c651c );                     
        SDK_FIXED_SIZE( c_interface_stub_header_t, 0x20 );                     
    };                                                                  
};
#include "magic/c_interface_stub_header_t.end.hpp"
SDK_VERIFY( struct tag::c_interface_stub_header_t, 0x20 );
