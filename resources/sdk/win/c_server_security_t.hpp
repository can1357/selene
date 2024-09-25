#pragma once
#include <sdkgen/support_library.hpp>
#include "com_call_locality_t.hpp"

#include "magic/c_server_security_t.start.hpp"
namespace win
{
    class c_message_call_t;
    class c_channel_handle_t;

    // [class CServerSecurity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_server_security_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 uint32_t                            i_ref_count;    //{ +0x0020    +0x0030    +0x0030    +0x0030    } | ._iRefCount
        _m01 uint32_t                            i_flags;        //{ +0x0024    +0x0034    +0x0034    +0x0034    } | ._iFlags
        _m02 class win::c_channel_handle_t*      p_handle;       //{ +0x0028    +0x0038    +0x0038    +0x0038    } | ._pHandle
        _m03 void*                               h_rpc;          //{ +0x0030    +0x0040    +0x0040    +0x0040    } | ._hRpc
        _m04 class win::c_message_call_t*        p_client_call;  //{ +0x0038    +0x0048    +0x0048    +0x0048    } | ._pClientCall
        _m05 void*                               h_saved;        //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._hSaved
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m06 const enum win::com_call_locality_t call_locality;  //{ +0x0060    +0x0068    +0x0060    } | ._callLocality
                                                               
        SDK_MAGIC_PROPERTIES( "CServerSecurity.$", 0x68, true, 0x4fb82cbd7cf4ef54 );              
        SDK_DYNAMIC_SIZE( c_server_security_t );               
    };                                                         
};
#include "magic/c_server_security_t.end.hpp"
