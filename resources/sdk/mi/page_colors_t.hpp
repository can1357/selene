#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/page_colors_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGE_COLORS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_colors_t                       
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 sdk::array<uint32_t, 4> page_size;  //{ +0x0000    +0x0000    +0x0000    } | .PageSize
                                               
        SDK_MAGIC_PROPERTIES( "_MI_PAGE_COLORS.$", 0x10, true, 0x84372b0dd1991083 );          
        SDK_FIXED_SIZE( page_colors_t, 0x10 );          
    };                                         
};
#include "magic/page_colors_t.end.hpp"
SDK_VERIFY( struct mi::page_colors_t, 0x10 );
