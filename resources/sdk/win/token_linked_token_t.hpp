#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_linked_token_t.start.hpp"
namespace win
{
    // [struct _TOKEN_LINKED_TOKEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_linked_token_t 
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                      
        _m00 void* linked_token;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LinkedToken
                                
        SDK_NONVOL_PROPERTIES( "_TOKEN_LINKED_TOKEN.$", 0x8, true, 0x53f44af82319f0d1 );             
        SDK_FIXED_SIZE( token_linked_token_t, 0x8 );             
    };                          
};
#include "magic/token_linked_token_t.end.hpp"
SDK_VERIFY( struct win::token_linked_token_t, 0x8 );
