#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/free_large_pages_t.start.hpp"
namespace mi
{
    struct free_large_page_list_t;

    // [struct _MI_FREE_LARGE_PAGES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct free_large_pages_t                                                    
    {                                                                            
        using large_pages_count_t =  sdk::array<sdk::array<sdk::array<sdk::array<uint64_t, 4>, 4>, 2>, 2>;                             
        using large_page_entries_t = sdk::array<sdk::array<sdk::array<sdk::array<struct mi::free_large_page_list_t*, 4>, 4>, 2>, 2>;                             
                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                       
        _m00 sdk::array<uint64_t, 2>                large_page_free_count;         //{ +0x0000    +0x0000    +0x0000    } | .LargePageFreeCount
        _m01 sdk::array<sdk::array<uint64_t, 2>, 2> large_page_free_count_hi_low;  //{ +0x0010    +0x0010    +0x0010    } | .LargePageFreeCountHiLow
        _m02 large_pages_count_t                    large_pages_count;             //{ +0x0030    +0x0030    +0x0030    } | .LargePagesCount
        _m03 large_page_entries_t                   large_page_entries;            //{ +0x0230    +0x0230    +0x0230    } | .LargePageEntries
                                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_FREE_LARGE_PAGES.$", 0x430, true, 0x43f2781faa1d12dd );                             
        SDK_FIXED_SIZE( free_large_pages_t, 0x430 );                             
    };                                                                           
};
#include "magic/free_large_pages_t.end.hpp"
SDK_VERIFY( struct mi::free_large_pages_t, 0x430 );
