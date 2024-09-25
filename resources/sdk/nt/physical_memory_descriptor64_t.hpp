#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_memory_run64_t.hpp"

#include "magic/physical_memory_descriptor64_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_DESCRIPTOR64]
    // => WDK 10 (NV)
    //
    struct physical_memory_descriptor64_t
    {                                    
        using run_t = sdk::array<struct nt::physical_memory_run64_t, 1>;                
                                         
        // WDK 10                     
        //                            
        _m00 uint32_t number_of_runs;      //{ +0x0000    } | .NumberOfRuns
        _m01 uint64_t number_of_pages;     //{ +0x0008    } | .NumberOfPages
        _m02 run_t    run;                 //{ +0x0010    } | .Run
                                         
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_DESCRIPTOR64.$", 0x0, false, 0x8ff8ec7794a6e222 );                
        SDK_FIXED_SIZE( physical_memory_descriptor64_t, 0x20 );                
    };                                   
};
#include "magic/physical_memory_descriptor64_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_descriptor64_t, 0x20 );
