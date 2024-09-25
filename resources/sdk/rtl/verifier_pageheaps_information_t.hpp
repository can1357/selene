#pragma once
#include <sdkgen/support_library.hpp>
#include "verifier_pageheap_information_t.hpp"

#include "magic/verifier_pageheaps_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_PAGEHEAPS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_pageheaps_information_t                 
    {                                                       
        using page_heap_information_t = sdk::array<struct rtl::verifier_pageheap_information_t, 1>;                      
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint32_t                 total_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint32_t                 number_page_heaps;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberPageHeaps
        _m02 page_heap_information_t  page_heap_information;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PageHeapInformation
                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_PAGEHEAPS_INFORMATION.$", 0x20, true, 0x13aadeffab8e7e3f );                      
        SDK_FIXED_SIZE( verifier_pageheaps_information_t, 0x20 );                      
    };                                                      
};
#include "magic/verifier_pageheaps_information_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_pageheaps_information_t, 0x20 );
