#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_t.hpp"
#include "../win/token_user_t.hpp"
#include "../nt/sid_and_attributes_t.hpp"

#include "magic/token_user_t.start.hpp"
namespace se
{
    // [struct _SE_TOKEN_USER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_user_t                                 
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m00 struct win::token_user_t        token_user;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenUser
        _m01 struct nt::sid_and_attributes_t user;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .User
        _m02 struct nt::sid_t                sid;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Sid
        _m03 sdk::array<uint8_t, 68>         buffer;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
                                                        
        SDK_NONVOL_PROPERTIES( "_SE_TOKEN_USER.$", 0x58, true, 0xe014a1d0d036f687 );           
        SDK_FIXED_SIZE( token_user_t, 0x58 );           
    };                                                  
};
#include "magic/token_user_t.end.hpp"
SDK_VERIFY( struct se::token_user_t, 0x58 );
