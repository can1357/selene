#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_primary_group_t.start.hpp"
namespace win
{
    // [struct _TOKEN_PRIMARY_GROUP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_primary_group_t 
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 void* primary_group;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrimaryGroup
                                 
        SDK_NONVOL_PROPERTIES( "_TOKEN_PRIMARY_GROUP.$", 0x8, true, 0x705b39dbb06c303e );              
        SDK_FIXED_SIZE( token_primary_group_t, 0x8 );              
    };                           
};
#include "magic/token_primary_group_t.end.hpp"
SDK_VERIFY( struct win::token_primary_group_t, 0x8 );
