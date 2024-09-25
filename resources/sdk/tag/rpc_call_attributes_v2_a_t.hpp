#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "rpc_call_type_t.hpp"

namespace rpc { struct call_local_address_v1_t; }

#include "magic/rpc_call_attributes_v2_a_t.start.hpp"
namespace tag
{
    // [struct tagRPC_CALL_ATTRIBUTES_V2_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpc_call_attributes_v2_a_t                                                 
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                            
        _m00 uint32_t                             version;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                             flags;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                             server_principal_name_buffer_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServerPrincipalNameBufferLength
        _m03 uint8_t*                             server_principal_name;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ServerPrincipalName
        _m04 uint32_t                             client_principal_name_buffer_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientPrincipalNameBufferLength
        _m05 uint8_t*                             client_principal_name;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientPrincipalName
        _m06 uint32_t                             authentication_level;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AuthenticationLevel
        _m07 uint32_t                             authentication_service;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AuthenticationService
        _m08 int32_t                              null_session;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NullSession
        _m09 int32_t                              kernel_mode_caller;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .KernelModeCaller
        _m10 uint32_t                             protocol_sequence;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ProtocolSequence
        _m11 uint32_t                             is_client_local;                      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .IsClientLocal
        _m12 void*                                client_pid;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClientPID
        _m13 uint32_t                             call_status;                          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CallStatus
        _m14 enum tag::rpc_call_type_t            call_type;                            //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .CallType
        _m15 struct rpc::call_local_address_v1_t* call_local_address;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CallLocalAddress
        _m16 uint16_t                             op_num;                               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OpNum
        _m17 struct nt::guid_t                    interface_uuid;                       //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .InterfaceUuid
                                                                                      
        SDK_MAGIC_PROPERTIES( "tagRPC_CALL_ATTRIBUTES_V2_A.$", 0x70, true, 0x1ca6b8faae0de1f );                                    
        SDK_FIXED_SIZE( rpc_call_attributes_v2_a_t, 0x70 );                                    
    };                                                                                
};
#include "magic/rpc_call_attributes_v2_a_t.end.hpp"
SDK_VERIFY( struct tag::rpc_call_attributes_v2_a_t, 0x70 );
