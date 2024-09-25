#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_and_attributes_t.hpp"

#include "magic/token_privileges_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_PRIVILEGES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_privileges_t                                                
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                   
        _m00 uint32_t                                        privilege_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivilegeCount
        _m01 sdk::array<struct nt::luid_and_attributes_t, 1> privileges;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Privileges
                                                                             
        SDK_NONVOL_PROPERTIES( "_TOKEN_PRIVILEGES.$", 0x10, true, 0x9dbc6a99d1e6d76b );                
        SDK_FIXED_SIZE( token_privileges_t, 0x10 );                          
    };                                                                       
};
#include "magic/token_privileges_t.end.hpp"
SDK_VERIFY( struct nt::token_privileges_t, 0x10 );
