#pragma once
#include <sdkgen/support_library.hpp>
#include "ace_header_t.hpp"

#include "magic/compound_access_allowed_ace_t.start.hpp"
namespace win
{
    // [struct _COMPOUND_ACCESS_ALLOWED_ACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct compound_access_allowed_ace_t                
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 struct win::ace_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                 mask;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m02 uint16_t                 compound_ace_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompoundAceType
        _m03 uint32_t                 sid_start;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SidStart
                                                        
        SDK_MAGIC_PROPERTIES( "_COMPOUND_ACCESS_ALLOWED_ACE.$", 0x10, true, 0x170714e861aff75e );                  
        SDK_FIXED_SIZE( compound_access_allowed_ace_t, 0x10 );                  
    };                                                  
};
#include "magic/compound_access_allowed_ace_t.end.hpp"
SDK_VERIFY( struct win::compound_access_allowed_ace_t, 0x10 );
