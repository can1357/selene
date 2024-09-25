#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/active_pfn_t.start.hpp"
namespace mi
{
    // [struct _MI_ACTIVE_PFN]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct active_pfn_t                                                
    {                                                                  
        struct u0_leaf_t                                               
        {                                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                         
            _m00 uint1_t  tradable;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Tradable
            _m01 uint43_t non_paged_buddy;                               //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .NonPagedBuddy
                                                                       
            SDK_MAGIC_PROPERTIES( "_MI_ACTIVE_PFN.Leaf.$", 0x8, true, 0xfe393fca429830a0 );                                    
            SDK_FIXED_SIZE( u0_leaf_t, 0x8 );                                    
        };                                                             
                                                                       
        struct u3_page_table_t                                         
        {                                                              
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                         
            _m03 uint1_t  tradable;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Tradable
            _m04 uint3_t  wsle_age;                                      //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .WsleAge
            _m05 uint10_t oldest_wsle_leaf_entries;                      //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .OldestWsleLeafEntries
            _m06 uint3_t  oldest_wsle_leaf_age;                          //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .OldestWsleLeafAge
            _m07 uint43_t non_paged_buddy;                               //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .NonPagedBuddy
                                                                       
            SDK_MAGIC_PROPERTIES( "_MI_ACTIVE_PFN.PageTable.$", 0x8, true, 0xc8a8dc8aacb77912 );                                             
            SDK_FIXED_SIZE( u3_page_table_t, 0x8 );                                             
        };                                                             
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                             
        _m02 u0_leaf_t                             leaf;                 //{ +0x0000    +0x0000    +0x0000    } | .Leaf
        _m08 u3_page_table_t                       page_table;           //{ +0x0000    +0x0000    +0x0000    } | .PageTable
        _m09 uint64_t                              entire_active_field;  //{ +0x0000    +0x0000    +0x0000    } | .EntireActiveField
                                                                       
        SDK_MAGIC_PROPERTIES( "_MI_ACTIVE_PFN.$", 0x8, true, 0x443b41cef795446e );                    
        SDK_FIXED_SIZE( active_pfn_t, 0x8 );                           
    };                                                                 
};
#include "magic/active_pfn_t.end.hpp"
SDK_VERIFY( struct mi::active_pfn_t::u0_leaf_t, 0x8 );
SDK_VERIFY( struct mi::active_pfn_t::u3_page_table_t, 0x8 );
SDK_VERIFY( struct mi::active_pfn_t, 0x8 );
