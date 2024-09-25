#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"
#include "token_source_t.hpp"

#include "magic/token_control_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_CONTROL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_control_t                               
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 struct nt::luid_t         token_id;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenId
        _m01 struct nt::luid_t         authentication_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AuthenticationId
        _m02 struct nt::luid_t         modified_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ModifiedId
        _m03 struct nt::token_source_t token_source;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .TokenSource
                                                         
        SDK_NONVOL_PROPERTIES( "_TOKEN_CONTROL.$", 0x28, true, 0xba9a10466a730975 );                  
        SDK_FIXED_SIZE( token_control_t, 0x28 );                  
    };                                                   
};
#include "magic/token_control_t.end.hpp"
SDK_VERIFY( struct nt::token_control_t, 0x28 );
