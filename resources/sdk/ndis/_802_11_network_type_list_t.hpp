#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_network_type_t.hpp"

#include "magic/_802_11_network_type_list_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_NETWORK_TYPE_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_network_type_list_t                                        
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                    
        _m00 uint32_t                                         number_of_items;  //{ +0x0000    +0x0000    +0x0000    } | .NumberOfItems
        _m01 sdk::array<enum ndis::_802_11_network_type_t, 1> network_type;     //{ +0x0004    +0x0004    +0x0004    } | .NetworkType
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_NETWORK_TYPE_LIST.$", 0x8, true, 0x7d46675680aac8d1 );                
        SDK_FIXED_SIZE( _802_11_network_type_list_t, 0x8 );                   
    };                                                                        
};
#include "magic/_802_11_network_type_list_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_network_type_list_t, 0x8 );
