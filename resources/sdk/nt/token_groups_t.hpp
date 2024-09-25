#pragma once
#include <sdkgen/support_library.hpp>
#include "sid_and_attributes_t.hpp"

#include "magic/token_groups_t.start.hpp"
namespace nt
{
    // [struct _TOKEN_GROUPS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_groups_t                                               
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                              
        _m00 uint32_t                                       group_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GroupCount
        _m01 sdk::array<struct nt::sid_and_attributes_t, 1> groups;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Groups
                                                                        
        SDK_NONVOL_PROPERTIES( "_TOKEN_GROUPS.$", 0x18, true, 0xc75174dd924704d3 );            
        SDK_FIXED_SIZE( token_groups_t, 0x18 );                         
    };                                                                  
};
#include "magic/token_groups_t.end.hpp"
SDK_VERIFY( struct nt::token_groups_t, 0x18 );
