#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmkid_candidate_t.start.hpp"
namespace ndis
{
    // [struct _PMKID_CANDIDATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pmkid_candidate_t              
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 sdk::array<uint8_t, 6> bssid;  //{ +0x0000    +0x0000    +0x0000    } | .BSSID
        _m01 uint32_t               flags;  //{ +0x0008    +0x0008    +0x0008    } | .Flags
                                          
        SDK_MAGIC_PROPERTIES( "_PMKID_CANDIDATE.$", 0xc, true, 0xe53eef1f21998d4 );      
        SDK_FIXED_SIZE( pmkid_candidate_t, 0xc );      
    };                                    
};
#include "magic/pmkid_candidate_t.end.hpp"
SDK_VERIFY( struct ndis::pmkid_candidate_t, 0xc );
