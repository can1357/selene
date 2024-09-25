#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_security_context_t.start.hpp"
namespace ps
{
    // [union _PS_CLIENT_SECURITY_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union client_security_context_t       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t impersonation_data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImpersonationData
        _m01 void*    impersonation_token;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImpersonationToken
        _m02 uint2_t  impersonation_level;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ImpersonationLevel
        _m03 uint1_t  effective_only;       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .EffectiveOnly
                                          
        SDK_MAGIC_PROPERTIES( "_PS_CLIENT_SECURITY_CONTEXT.$", 0x8, true, 0x2cc7a3faea4ce324 );                    
        SDK_FIXED_SIZE( client_security_context_t, 0x8 );                    
    };                                    
};
#include "magic/client_security_context_t.end.hpp"
SDK_VERIFY( union ps::client_security_context_t, 0x8 );
