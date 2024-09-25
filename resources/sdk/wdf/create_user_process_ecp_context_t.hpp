#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_user_process_ecp_context_t.start.hpp"
namespace wdf
{
    // [struct _CREATE_USER_PROCESS_ECP_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_user_process_ecp_context_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 void*    access_token;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessToken
                                            
        SDK_NONVOL_PROPERTIES( "_CREATE_USER_PROCESS_ECP_CONTEXT.$", 0x10, true, 0x2606e9fb10f32217 );             
        SDK_FIXED_SIZE( create_user_process_ecp_context_t, 0x10 );             
    };                                      
};
#include "magic/create_user_process_ecp_context_t.end.hpp"
SDK_VERIFY( struct wdf::create_user_process_ecp_context_t, 0x10 );
