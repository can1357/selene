#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_privacy_exemption_t.hpp"

#include "magic/dot11_privacy_exemption_list_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PRIVACY_EXEMPTION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_privacy_exemption_list_t                           
    {                                                               
        using privacy_exemption_entries_t = sdk::array<struct ndis::dot11_privacy_exemption_t, 1>;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 struct ndis::object_header_t header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_of_entries;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                     u_total_num_of_entries;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 privacy_exemption_entries_t  privacy_exemption_entries;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PrivacyExemptionEntries
                                                                    
        SDK_MAGIC_PROPERTIES( "DOT11_PRIVACY_EXEMPTION_LIST.$", 0x14, true, 0xb4d2a55856ebac90 );                          
        SDK_FIXED_SIZE( dot11_privacy_exemption_list_t, 0x14 );                          
    };                                                              
};
#include "magic/dot11_privacy_exemption_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_privacy_exemption_list_t, 0x14 );
