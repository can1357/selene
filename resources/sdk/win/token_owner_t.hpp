#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_owner_t.start.hpp"
namespace win
{
    // [struct _TOKEN_OWNER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_owner_t 
    {                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 void* owner;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Owner
                         
        SDK_NONVOL_PROPERTIES( "_TOKEN_OWNER.$", 0x8, true, 0xf49288c3c782bd80 );      
        SDK_FIXED_SIZE( token_owner_t, 0x8 );      
    };                   
};
#include "magic/token_owner_t.end.hpp"
SDK_VERIFY( struct win::token_owner_t, 0x8 );
