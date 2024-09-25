#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "caller_info_t.hpp"

#include "magic/client_call_tracing_info_t.start.hpp"
namespace win
{
    // [struct ClientCallTracingInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_call_tracing_info_t                            
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                       
        _m00 void*                     p_proxy_interface_pointer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pProxyInterfacePointer
        _m01 void*                     p_proxy_manager_i_unknown;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pProxyManagerIUnknown
        _m02 struct nt::guid_t         ipid;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ipid
        _m03 uint64_t                  oid;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .oid
        _m04 struct win::caller_info_t caller_info;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .callerInfo
                                                                 
        SDK_MAGIC_PROPERTIES( "ClientCallTracingInfo.$", 0x30, true, 0xb2d04d304ad708b5 );                          
        SDK_FIXED_SIZE( client_call_tracing_info_t, 0x30 );                          
    };                                                           
};
#include "magic/client_call_tracing_info_t.end.hpp"
SDK_VERIFY( struct win::client_call_tracing_info_t, 0x30 );
