#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_vwifi_combination_t.hpp"

#include "magic/dot11_vwifi_attributes_t.start.hpp"
namespace ndis
{
    // [struct DOT11_VWIFI_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_vwifi_attributes_t                              
    {                                                            
        using combinations_t = sdk::array<struct ndis::dot11_vwifi_combination_t, 1>;                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_total_num_of_entries;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uTotalNumOfEntries
        _m02 combinations_t               combinations;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Combinations
                                                                 
        SDK_MAGIC_PROPERTIES( "DOT11_VWIFI_ATTRIBUTES.$", 0x18, true, 0xcbf7a4b61000d20 );                       
        SDK_FIXED_SIZE( dot11_vwifi_attributes_t, 0x18 );                       
    };                                                           
};
#include "magic/dot11_vwifi_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_vwifi_attributes_t, 0x18 );
