#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_memory_range_t.start.hpp"
namespace nt
{
    // [struct _LOADER_MEMORY_RANGE]
    // => Windows 11
    //
    struct loader_memory_range_t      
    {                                 
        // Windows 11                 
        //                            
        _m00 uint64_t start_page;       //{ +0x0000    } | .StartPage
        _m01 uint64_t number_of_pages;  //{ +0x0008    } | .NumberOfPages
                                      
        SDK_MAGIC_PROPERTIES( "_LOADER_MEMORY_RANGE.$", 0x0, false, 0xf902c8b9f1cbb71a );                
        SDK_FIXED_SIZE( loader_memory_range_t, 0x10 );                
    };                                
};
#include "magic/loader_memory_range_t.end.hpp"
SDK_VERIFY( struct nt::loader_memory_range_t, 0x10 );
