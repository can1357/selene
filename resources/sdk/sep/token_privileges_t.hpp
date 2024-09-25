#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_privileges_t.start.hpp"
namespace sep
{
    // [struct _SEP_TOKEN_PRIVILEGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_privileges_t            
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t present;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Present
        _m01 uint64_t enabled;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Enabled
        _m02 uint64_t enabled_by_default;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EnabledByDefault
                                         
        SDK_MAGIC_PROPERTIES( "_SEP_TOKEN_PRIVILEGES.$", 0x18, true, 0xb95d40943d1e8019 );                   
        SDK_FIXED_SIZE( token_privileges_t, 0x18 );                   
    };                                   
};
#include "magic/token_privileges_t.end.hpp"
SDK_VERIFY( struct sep::token_privileges_t, 0x18 );
