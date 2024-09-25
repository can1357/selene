#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/policy_t.start.hpp"
namespace rpc
{
    // [struct _RPC_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct policy_t                  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t length;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t endpoint_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndpointFlags
        _m02 uint32_t nic_flags;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NICFlags
                                     
        SDK_MAGIC_PROPERTIES( "_RPC_POLICY.$", 0xc, true, 0x1d0880efbf1e8a90 );               
        SDK_FIXED_SIZE( policy_t, 0xc );               
    };                               
};
#include "magic/policy_t.end.hpp"
SDK_VERIFY( struct rpc::policy_t, 0xc );
