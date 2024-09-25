#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_if_t.start.hpp"
namespace tag
{
    // [struct tagRegIf]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_if_t                                                
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                         
        _m00 void*                                 h_server_if;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hServerIf
        _m01 uint32_t                              dw_reg_flags;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwRegFlags
        _m02 sdk::function<int32_t(void*, void*)>* pfn_security_cb;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnSecurityCB
                                                                   
        SDK_MAGIC_PROPERTIES( "tagRegIf.$", 0x18, true, 0x728c6af1f5170309 );                
        SDK_FIXED_SIZE( reg_if_t, 0x18 );                          
    };                                                             
};
#include "magic/reg_if_t.end.hpp"
SDK_VERIFY( struct tag::reg_if_t, 0x18 );
