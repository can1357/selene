#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct acl_t; }

#include "magic/token_default_dacl_t.start.hpp"
namespace win
{
    // [struct _TOKEN_DEFAULT_DACL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_default_dacl_t             
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 struct nt::acl_t* default_dacl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DefaultDacl
                                            
        SDK_NONVOL_PROPERTIES( "_TOKEN_DEFAULT_DACL.$", 0x8, true, 0x757f32d3361b229d );             
        SDK_FIXED_SIZE( token_default_dacl_t, 0x8 );             
    };                                      
};
#include "magic/token_default_dacl_t.end.hpp"
SDK_VERIFY( struct win::token_default_dacl_t, 0x8 );
