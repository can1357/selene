#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/x_apt_callback_t.start.hpp"
namespace tag
{
    // [struct tagXAptCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_apt_callback_t                        
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 int64_t           pfn_callback;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnCallback
        _m01 int64_t           p_param;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pParam
        _m02 int64_t           p_server_ctx;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pServerCtx
        _m03 int64_t           p_unk;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pUnk
        _m04 struct nt::guid_t iid;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .iid
        _m05 int32_t           i_method;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .iMethod
        _m06 struct nt::guid_t guid_process_secret;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .guidProcessSecret
                                                   
        SDK_MAGIC_PROPERTIES( "tagXAptCallback.$", 0x48, true, 0x759eb2f2c689e23b );                    
        SDK_FIXED_SIZE( x_apt_callback_t, 0x48 );                    
    };                                             
};
#include "magic/x_apt_callback_t.end.hpp"
SDK_VERIFY( struct tag::x_apt_callback_t, 0x48 );
