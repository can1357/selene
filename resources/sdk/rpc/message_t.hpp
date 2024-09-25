#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/message_t.start.hpp"
namespace rpc
{
    struct syntax_identifier_t;

    // [struct _RPC_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_t                                                    
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                              
        _m00 void*                            handle;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint32_t                         data_representation;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataRepresentation
        _m02 void*                            buffer;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
        _m03 uint32_t                         buffer_length;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BufferLength
        _m04 uint32_t                         proc_num;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ProcNum
        _m05 struct rpc::syntax_identifier_t* transfer_syntax;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransferSyntax
        _m06 void*                            rpc_interface_information;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RpcInterfaceInformation
        _m07 void*                            reserved_for_runtime;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReservedForRuntime
        _m08 void*                            manager_epv;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ManagerEpv
        _m09 void*                            import_context;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ImportContext
        _m10 uint32_t                         rpc_flags;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RpcFlags
                                                                        
        SDK_MAGIC_PROPERTIES( "_RPC_MESSAGE.$", 0x50, true, 0x43e37d783cd3f5a2 );                          
        SDK_FIXED_SIZE( message_t, 0x50 );                              
    };                                                                  
};
#include "magic/message_t.end.hpp"
SDK_VERIFY( struct rpc::message_t, 0x50 );
