#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/sid_and_attributes_t.hpp"

#include "magic/token_mandatory_label_t.start.hpp"
namespace win
{
    // [struct _TOKEN_MANDATORY_LABEL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_mandatory_label_t                 
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                         
        _m00 struct nt::sid_and_attributes_t label;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Label
                                                   
        SDK_NONVOL_PROPERTIES( "_TOKEN_MANDATORY_LABEL.$", 0x10, true, 0xd5c4bdedb934b253 );      
        SDK_FIXED_SIZE( token_mandatory_label_t, 0x10 );      
    };                                             
};
#include "magic/token_mandatory_label_t.end.hpp"
SDK_VERIFY( struct win::token_mandatory_label_t, 0x10 );
