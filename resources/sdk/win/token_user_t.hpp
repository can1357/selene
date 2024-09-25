#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_and_attributes_t.hpp"

#include "magic/token_user_t.start.hpp"
namespace win
{
    // [struct _TOKEN_USER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_user_t                           
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                        
        _m00 struct nt::sid_and_attributes_t user;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .User
                                                  
        SDK_NONVOL_PROPERTIES( "_TOKEN_USER.$", 0x10, true, 0xff9f391bc5a5ca5c );     
        SDK_FIXED_SIZE( token_user_t, 0x10 );     
    };                                            
};
#include "magic/token_user_t.end.hpp"
SDK_VERIFY( struct win::token_user_t, 0x10 );
