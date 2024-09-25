#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;        }
namespace win { struct uuid_vector_t; }

#include "magic/interface_templatea_t.start.hpp"
namespace rpc
{
    // [struct RPC_INTERFACE_TEMPLATEA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interface_templatea_t                                       
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                             
        _m00 uint32_t                              version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*                                 if_spec;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IfSpec
        _m02 struct nt::guid_t*                    mgr_type_uuid;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MgrTypeUuid
        _m03 void*                                 mgr_epv;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MgrEpv
        _m04 uint32_t                              flags;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Flags
        _m05 uint32_t                              max_calls;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxCalls
        _m06 uint32_t                              max_rpc_size;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxRpcSize
        _m07 sdk::function<int32_t(void*, void*)>* if_callback;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IfCallback
        _m08 struct win::uuid_vector_t*            uuid_vector;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UuidVector
        _m09 uint8_t*                              annotation;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Annotation
        _m10 void*                                 security_descriptor;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SecurityDescriptor
                                                                       
        SDK_MAGIC_PROPERTIES( "RPC_INTERFACE_TEMPLATEA.$", 0x50, true, 0x23efc3a5984f8f30 );                    
        SDK_FIXED_SIZE( interface_templatea_t, 0x50 );                    
    };                                                                 
};
#include "magic/interface_templatea_t.end.hpp"
SDK_VERIFY( struct rpc::interface_templatea_t, 0x50 );
