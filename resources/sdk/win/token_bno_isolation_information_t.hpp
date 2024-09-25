#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_bno_isolation_information_t.start.hpp"
namespace win
{
    // [struct _TOKEN_BNO_ISOLATION_INFORMATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_bno_isolation_information_t
    {                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 wchar_t* isolation_prefix;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IsolationPrefix
        _m01 uint8_t  isolation_enabled;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IsolationEnabled
                                            
        SDK_NONVOL_PROPERTIES( "_TOKEN_BNO_ISOLATION_INFORMATION.$", 0x10, true, 0x3bd755c26c86309e );                  
        SDK_FIXED_SIZE( token_bno_isolation_information_t, 0x10 );                  
    };                                      
};
#include "magic/token_bno_isolation_information_t.end.hpp"
SDK_VERIFY( struct win::token_bno_isolation_information_t, 0x10 );
