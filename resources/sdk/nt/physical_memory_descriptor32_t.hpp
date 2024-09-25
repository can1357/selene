#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_memory_run32_t.hpp"

#include "magic/physical_memory_descriptor32_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_DESCRIPTOR32]
    // => WDK 10 (NV)
    //
    struct physical_memory_descriptor32_t
    {                                    
        using run_t = sdk::array<struct nt::physical_memory_run32_t, 1>;                
                                         
        // WDK 10                     
        //                            
        _m00 uint32_t number_of_runs;      //{ +0x0000    } | .NumberOfRuns
        _m01 uint32_t number_of_pages;     //{ +0x0004    } | .NumberOfPages
        _m02 run_t    run;                 //{ +0x0008    } | .Run
                                         
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_DESCRIPTOR32.$", 0x0, false, 0x585a5898821b98dc );                
        SDK_FIXED_SIZE( physical_memory_descriptor32_t, 0x10 );                
    };                                   
};
#include "magic/physical_memory_descriptor32_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_descriptor32_t, 0x10 );
