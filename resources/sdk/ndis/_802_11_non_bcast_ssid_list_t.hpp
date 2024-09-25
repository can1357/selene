#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_ssid_t.hpp"

#include "magic/_802_11_non_bcast_ssid_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_NON_BCAST_SSID_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_non_bcast_ssid_list_t                                
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                              
        _m00 uint32_t                                   number_of_items;  //{ +0x0000    +0x0000    +0x0000    } | .NumberOfItems
        _m01 sdk::array<struct ndis::_802_11_ssid_t, 1> non_bcast_ssid;   //{ +0x0004    +0x0004    +0x0004    } | .Non_Bcast_Ssid
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_NON_BCAST_SSID_LIST.$", 0x28, true, 0x89290e64a71e2a9a );                
        SDK_FIXED_SIZE( _802_11_non_bcast_ssid_list_t, 0x28 );                
    };                                                                  
};
#include "magic/_802_11_non_bcast_ssid_list_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_non_bcast_ssid_list_t, 0x28 );
