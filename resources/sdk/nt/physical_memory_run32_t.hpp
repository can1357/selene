#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_memory_run32_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_RUN32]
    // => WDK 10 (NV)
    //
    struct physical_memory_run32_t
    {                             
        // WDK 10                
        //                       
        _m00 uint32_t base_page;    //{ +0x0000    } | .BasePage
        _m01 uint32_t page_count;   //{ +0x0004    } | .PageCount
                                  
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_RUN32.$", 0x0, false, 0x5507f94b7919c28b );           
        SDK_FIXED_SIZE( physical_memory_run32_t, 0x8 );           
    };                            
};
#include "magic/physical_memory_run32_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_run32_t, 0x8 );
