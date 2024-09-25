#pragma once
#include <sdkgen/support_library.hpp>
#include "wlan_bssid_t.hpp"

#include "magic/_802_11_bssid_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_BSSID_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_bssid_list_t                                       
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                            
        _m00 uint32_t                                 number_of_items;  //{ +0x0000    +0x0000    +0x0000    } | .NumberOfItems
        _m01 sdk::array<struct ndis::wlan_bssid_t, 1> bssid;            //{ +0x0004    +0x0004    +0x0004    } | .Bssid
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_BSSID_LIST.$", 0x6c, true, 0x5fd89450181f94f7 );                
        SDK_FIXED_SIZE( _802_11_bssid_list_t, 0x6c );                 
    };                                                                
};
#include "magic/_802_11_bssid_list_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_bssid_list_t, 0x6c );
