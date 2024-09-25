#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rpc_call_attributes_v1_a_t.start.hpp"
namespace tag
{
    // [struct tagRPC_CALL_ATTRIBUTES_V1_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpc_call_attributes_v1_a_t                     
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint32_t version;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t server_principal_name_buffer_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServerPrincipalNameBufferLength
        _m03 uint8_t* server_principal_name;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServerPrincipalName
        _m04 uint32_t client_principal_name_buffer_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientPrincipalNameBufferLength
        _m05 uint8_t* client_principal_name;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientPrincipalName
        _m06 uint32_t authentication_level;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AuthenticationLevel
        _m07 uint32_t authentication_service;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AuthenticationService
        _m08 int32_t  null_session;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NullSession
                                                          
        SDK_MAGIC_PROPERTIES( "tagRPC_CALL_ATTRIBUTES_V1_A.$", 0x38, true, 0x3aa1cbaafca230b4 );                                    
        SDK_FIXED_SIZE( rpc_call_attributes_v1_a_t, 0x38 );                                    
    };                                                    
};
#include "magic/rpc_call_attributes_v1_a_t.end.hpp"
SDK_VERIFY( struct tag::rpc_call_attributes_v1_a_t, 0x38 );
