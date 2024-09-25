#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/binding_handle_template_v1_a_t.start.hpp"
namespace rpc
{
    // [struct _RPC_BINDING_HANDLE_TEMPLATE_V1_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binding_handle_template_v1_a_t        
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 uint32_t          version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t          flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t          protocol_sequence;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtocolSequence
        _m03 uint8_t*          network_address;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NetworkAddress
        _m04 uint8_t*          string_endpoint;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StringEndpoint
        _m05 struct nt::guid_t object_uuid;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectUuid
                                                 
        SDK_MAGIC_PROPERTIES( "_RPC_BINDING_HANDLE_TEMPLATE_V1_A.$", 0x38, true, 0x666246d3b655af26 );                  
        SDK_FIXED_SIZE( binding_handle_template_v1_a_t, 0x38 );                  
    };                                           
};
#include "magic/binding_handle_template_v1_a_t.end.hpp"
SDK_VERIFY( struct rpc::binding_handle_template_v1_a_t, 0x38 );
