#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_vwifi_combination_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_VWIFI_COMBINATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_vwifi_combination_t                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_infrastructure;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumInfrastructure
        _m02 uint32_t                     u_num_adhoc;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uNumAdhoc
        _m03 uint32_t                     u_num_soft_ap;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uNumSoftAP
                                                               
        SDK_MAGIC_PROPERTIES( "_DOT11_VWIFI_COMBINATION.$", 0x10, true, 0x6d0551913c91278f );                     
        SDK_FIXED_SIZE( dot11_vwifi_combination_t, 0x10 );                     
    };                                                         
};
#include "magic/dot11_vwifi_combination_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_vwifi_combination_t, 0x10 );
