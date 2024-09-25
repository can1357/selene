#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"

#include "magic/token_source_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_SOURCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_source_t                          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 sdk::array<char, 8> source_name;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SourceName
        _m01 struct nt::luid_t   source_identifier;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceIdentifier
                                                   
        SDK_NONVOL_PROPERTIES( "_TOKEN_SOURCE.$", 0x10, true, 0xb749b3406cee2cec );                  
        SDK_FIXED_SIZE( token_source_t, 0x10 );                  
    };                                             
};
#include "magic/token_source_t.end.hpp"
SDK_VERIFY( struct nt::token_source_t, 0x10 );
