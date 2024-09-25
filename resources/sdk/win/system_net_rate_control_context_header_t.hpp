#pragma once
#include <sdkgen/support_library.hpp>
#include "system_net_rate_control_type_t.hpp"

#include "magic/system_net_rate_control_context_header_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_net_rate_control_context_header_t                 
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                          
        _m00 uint64_t                                 policy_cookie;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PolicyCookie
        _m01 enum win::system_net_rate_control_type_t type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER.$", 0x10, true, 0x6d603a9da6b90afe );              
        SDK_FIXED_SIZE( system_net_rate_control_context_header_t, 0x10 );              
    };                                                              
};
#include "magic/system_net_rate_control_context_header_t.end.hpp"
SDK_VERIFY( struct win::system_net_rate_control_context_header_t, 0x10 );
