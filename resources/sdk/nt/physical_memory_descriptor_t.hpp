#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_memory_run_t.hpp"

#include "magic/physical_memory_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_MEMORY_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_memory_descriptor_t                                      
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                   
        _m00 uint32_t                                        number_of_runs;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfRuns
        _m01 uint64_t                                        number_of_pages;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfPages
        _m02 sdk::array<struct nt::physical_memory_run_t, 1> run;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Run
                                                                             
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_MEMORY_DESCRIPTOR.$", 0x20, true, 0xaac0a1220251cfa2 );                
        SDK_FIXED_SIZE( physical_memory_descriptor_t, 0x20 );                
    };                                                                       
};
#include "magic/physical_memory_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::physical_memory_descriptor_t, 0x20 );
