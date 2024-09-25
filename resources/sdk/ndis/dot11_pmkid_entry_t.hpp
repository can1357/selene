#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_pmkid_entry_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PMKID_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_pmkid_entry_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 sdk::array<uint8_t, 6>  bssid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BSSID
        _m01 sdk::array<uint8_t, 16> pmkid;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .PMKID
        _m02 uint32_t                u_flags;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uFlags
                                             
        SDK_MAGIC_PROPERTIES( "DOT11_PMKID_ENTRY.$", 0x1c, true, 0x4149bbd1047d9b17 );        
        SDK_FIXED_SIZE( dot11_pmkid_entry_t, 0x1c );        
    };                                       
};
#include "magic/dot11_pmkid_entry_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_pmkid_entry_t, 0x1c );
