#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_memory_run_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_RUN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_memory_run_t 
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t base_page;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BasePage
        _m01 uint64_t page_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PageCount
                                 
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_RUN.$", 0x10, true, 0xd0a2f97fd48b61df );           
        SDK_FIXED_SIZE( physical_memory_run_t, 0x10 );           
    };                           
};
#include "magic/physical_memory_run_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_run_t, 0x10 );
