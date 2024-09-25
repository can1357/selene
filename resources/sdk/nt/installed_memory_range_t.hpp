#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/installed_memory_range_t.start.hpp"
namespace nt
{
    // [struct _INSTALLED_MEMORY_RANGE]
    // => Windows 11
    //
    struct installed_memory_range_t
    {                              
        // Windows 11            
        //                       
        _m00 uint64_t base_page;     //{ +0x0000    } | .BasePage
        _m01 uint64_t page_count;    //{ +0x0008    } | .PageCount
                                   
        SDK_MAGIC_PROPERTIES( "_INSTALLED_MEMORY_RANGE.$", 0x0, false, 0x62f067fa271ecd40 );           
        SDK_FIXED_SIZE( installed_memory_range_t, 0x10 );           
    };                             
};
#include "magic/installed_memory_range_t.end.hpp"
SDK_VERIFY( struct nt::installed_memory_range_t, 0x10 );
