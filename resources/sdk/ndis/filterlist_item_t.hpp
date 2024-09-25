#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/filterlist_item_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_FILTERLIST_ITEM]
    // => Windows 10 v1607
    //
    struct filterlist_item_t                      
    {                                             
        // Windows 10 v1607                       
        //                                        
        _m00 struct nt::guid_t filter_unique_name;  //{ +0x0000    } | .FilterUniqueName
        _m01 uint16_t          filter_index;        //{ +0x0010    } | .FilterIndex
                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTERLIST_ITEM.$", 0x0, false, 0x6be15c216a6c0a92 );                   
        SDK_FIXED_SIZE( filterlist_item_t, 0x12 );                   
    };                                            
};
#include "magic/filterlist_item_t.end.hpp"
SDK_VERIFY( struct ndis::filterlist_item_t, 0x12 );
