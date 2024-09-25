#pragma once
#include <sdkgen/support_library.hpp>
#include "dot11_ssid_t.hpp"
#include "object_header_t.hpp"

#include "magic/dot11_ssid_list_t.start.hpp"
namespace ndis
{
    // [struct DOT11_SSID_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_ssid_list_t                                                 
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                   
        _m00 struct ndis::object_header_t             header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                 u_num_of_entries;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                                 u_total_num_of_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 sdk::array<struct ndis::dot11_ssid_t, 1> ssi_ds;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SSIDs
                                                                             
        SDK_MAGIC_PROPERTIES( "DOT11_SSID_LIST.$", 0x30, true, 0x36caaed86125aabe );                       
        SDK_FIXED_SIZE( dot11_ssid_list_t, 0x30 );                           
    };                                                                       
};
#include "magic/dot11_ssid_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_ssid_list_t, 0x30 );
