#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/srtp_protection_profiles_t.start.hpp"
namespace sec
{
    // [struct _SEC_SRTP_PROTECTION_PROFILES]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct srtp_protection_profiles_t              
    {                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint16_t                profiles_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProfilesSize
        _m01 sdk::array<uint16_t, 1> profiles_list;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ProfilesList
                                                   
        SDK_NONVOL_PROPERTIES( "_SEC_SRTP_PROTECTION_PROFILES.$", 0x4, true, 0xabccd20fc60f36e6 );              
        SDK_FIXED_SIZE( srtp_protection_profiles_t, 0x4 );              
    };                                             
};
#include "magic/srtp_protection_profiles_t.end.hpp"
SDK_VERIFY( struct sec::srtp_protection_profiles_t, 0x4 );
