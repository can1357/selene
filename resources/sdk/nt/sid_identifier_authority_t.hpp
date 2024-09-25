#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sid_identifier_authority_t.start.hpp"
namespace nt
{
    // [struct _SID_IDENTIFIER_AUTHORITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sid_identifier_authority_t     
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 sdk::array<uint8_t, 6> value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_SID_IDENTIFIER_AUTHORITY.$", 0x6, true, 0x7768eb079b3d7b47 );      
        SDK_FIXED_SIZE( sid_identifier_authority_t, 0x6 );      
    };                                    
};
#include "magic/sid_identifier_authority_t.end.hpp"
SDK_VERIFY( struct nt::sid_identifier_authority_t, 0x6 );
