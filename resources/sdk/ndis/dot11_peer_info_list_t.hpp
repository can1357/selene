#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_peer_info_t.hpp"

#include "magic/dot11_peer_info_list_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_PEER_INFO_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_peer_info_list_t                                                 
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                        
        _m00 struct ndis::object_header_t                  header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                      u_num_of_entries;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                                      u_total_num_of_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 sdk::array<struct ndis::dot11_peer_info_t, 1> peer_info;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PeerInfo
                                                                                  
        SDK_MAGIC_PROPERTIES( "_DOT11_PEER_INFO_LIST.$", 0x170, true, 0x68eca024c2fc077b );                       
        SDK_FIXED_SIZE( dot11_peer_info_list_t, 0x170 );                          
    };                                                                            
};
#include "magic/dot11_peer_info_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_peer_info_list_t, 0x170 );
