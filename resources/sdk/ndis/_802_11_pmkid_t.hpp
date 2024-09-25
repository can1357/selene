#pragma once
#include <sdkgen/support_library.hpp>
#include "bssid_info_t.hpp"

#include "magic/_802_11_pmkid_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_PMKID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_pmkid_t                                             
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 uint32_t                                 length;            //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                                 bssid_info_count;  //{ +0x0004    +0x0004    +0x0004    } | .BSSIDInfoCount
        _m02 sdk::array<struct ndis::bssid_info_t, 1> bssid_info;        //{ +0x0008    +0x0008    +0x0008    } | .BSSIDInfo
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_PMKID.$", 0x20, true, 0xaafba4e5bb026e55 );                 
        SDK_FIXED_SIZE( _802_11_pmkid_t, 0x20 );                       
    };                                                                 
};
#include "magic/_802_11_pmkid_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_pmkid_t, 0x20 );
