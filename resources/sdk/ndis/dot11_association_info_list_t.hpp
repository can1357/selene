#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_association_info_ex_t.hpp"

#include "magic/dot11_association_info_list_t.start.hpp"
namespace ndis
{
    // [struct DOT11_ASSOCIATION_INFO_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_association_info_list_t                         
    {                                                            
        using dot11_assoc_info_t = sdk::array<struct ndis::dot11_association_info_ex_t, 1>;                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 struct ndis::object_header_t header;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_of_entries;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumOfEntries
        _m02 uint32_t                     u_total_num_of_entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uTotalNumOfEntries
        _m03 dot11_assoc_info_t           dot11_assoc_info;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dot11AssocInfo
                                                                 
        SDK_MAGIC_PROPERTIES( "DOT11_ASSOCIATION_INFO_LIST.$", 0x158, true, 0x40439751d7332338 );                       
        SDK_FIXED_SIZE( dot11_association_info_list_t, 0x158 );                       
    };                                                           
};
#include "magic/dot11_association_info_list_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_association_info_list_t, 0x158 );
