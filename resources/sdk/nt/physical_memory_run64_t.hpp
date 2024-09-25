#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_memory_run64_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_RUN64]
    // => WDK 10 (NV)
    //
    struct physical_memory_run64_t
    {                             
        // WDK 10                
        //                       
        _m00 uint64_t base_page;    //{ +0x0000    } | .BasePage
        _m01 uint64_t page_count;   //{ +0x0008    } | .PageCount
                                  
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_RUN64.$", 0x0, false, 0xf7b4820b1d381ba3 );           
        SDK_FIXED_SIZE( physical_memory_run64_t, 0x10 );           
    };                            
};
#include "magic/physical_memory_run64_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_run64_t, 0x10 );
