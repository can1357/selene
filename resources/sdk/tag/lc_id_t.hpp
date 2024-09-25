#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lc_id_t.start.hpp"
namespace tag
{
    // [struct tagLC_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lc_id_t                
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t w_language;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wLanguage
        _m01 uint16_t w_country;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wCountry
        _m02 uint16_t w_code_page;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wCodePage
                                  
        SDK_MAGIC_PROPERTIES( "tagLC_ID.$", 0x6, true, 0x2e00e319fb3a3b04 );            
        SDK_FIXED_SIZE( lc_id_t, 0x6 );            
    };                            
};
#include "magic/lc_id_t.end.hpp"
SDK_VERIFY( struct tag::lc_id_t, 0x6 );
