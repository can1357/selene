#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/token_origin_t.start.hpp"
namespace win
{
    // [struct _TOKEN_ORIGIN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_origin_t                                
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                               
        _m00 struct nt::luid_t originating_logon_session;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OriginatingLogonSession
                                                         
        SDK_NONVOL_PROPERTIES( "_TOKEN_ORIGIN.$", 0x8, true, 0x36f421d5bcb0dd43 );                          
        SDK_FIXED_SIZE( token_origin_t, 0x8 );                          
    };                                                   
};
#include "magic/token_origin_t.end.hpp"
SDK_VERIFY( struct win::token_origin_t, 0x8 );
