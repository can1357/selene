#pragma once
#include <sdkgen/support_library.hpp>
#include "syntax_identifier_t.hpp"

#include "magic/client_interface_t.start.hpp"
namespace rpc
{
    struct dispatch_table_t;
    struct protseq_endpoint_t;

    // [struct _RPC_CLIENT_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_interface_t                                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 uint32_t                        length;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 struct rpc::syntax_identifier_t interface_id;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterfaceId
        _m02 struct rpc::syntax_identifier_t transfer_syntax;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TransferSyntax
        _m03 struct rpc::dispatch_table_t*   dispatch_table;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DispatchTable
        _m04 uint32_t                        rpc_protseq_endpoint_count;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RpcProtseqEndpointCount
        _m05 struct rpc::protseq_endpoint_t* rpc_protseq_endpoint;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RpcProtseqEndpoint
        _m06 const void*                     interpreter_info;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .InterpreterInfo
        _m07 uint32_t                        flags;                       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Flags
                                                                        
        SDK_MAGIC_PROPERTIES( "_RPC_CLIENT_INTERFACE.$", 0x60, true, 0x2c11332a3307d3b4 );                           
        SDK_FIXED_SIZE( client_interface_t, 0x60 );                           
    };                                                                  
};
#include "magic/client_interface_t.end.hpp"
SDK_VERIFY( struct rpc::client_interface_t, 0x60 );
