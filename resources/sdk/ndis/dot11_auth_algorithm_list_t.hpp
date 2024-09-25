#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_auth_algorithm_t.hpp"

#include "magic/dot11_auth_algorithm_list_t.start.hpp"
namespace ndis
{
    // [struct DOT11_AUTH_ALGORITHM_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_auth_algorithm_list_t                                               
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                           
        _m00 struct ndis::object_header_t                     header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                         u_num_of_entries;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                                         u_total_num_of_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 sdk::array<enum ndis::dot11_auth_algorithm_t, 1> algorithm_ids;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AlgorithmIds
                                                                                     
        SDK_MAGIC_PROPERTIES( "DOT11_AUTH_ALGORITHM_LIST.$", 0x10, true, 0x5fedc2832823d0b4 );                       
        SDK_FIXED_SIZE( dot11_auth_algorithm_list_t, 0x10 );                         
    };                                                                               
};
#include "magic/dot11_auth_algorithm_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_auth_algorithm_list_t, 0x10 );
