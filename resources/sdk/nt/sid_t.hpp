#pragma once
#include <sdkgen/support_library.hpp>
#include "sid_identifier_authority_t.hpp"

#include "magic/sid_t.start.hpp"
namespace nt
{
    // [struct _SID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sid_t                                                        
    {                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 uint8_t                               revision;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t                               sub_authority_count;   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .SubAuthorityCount
        _m02 struct nt::sid_identifier_authority_t identifier_authority;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .IdentifierAuthority
        _m03 sdk::array<uint32_t, 1>               sub_authority;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SubAuthority
                                                                        
        SDK_NONVOL_PROPERTIES( "_SID.$", 0xc, true, 0xcae239a3732c2d35 );                     
        SDK_FIXED_SIZE( sid_t, 0xc );                                   
    };                                                                  
};
#include "magic/sid_t.end.hpp"
SDK_VERIFY( struct nt::sid_t, 0xc );
