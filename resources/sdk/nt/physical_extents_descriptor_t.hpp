#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_memory_run_t.hpp"

#include "magic/physical_extents_descriptor_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_EXTENTS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct physical_extents_descriptor_t                                          
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 uint32_t                                        number_of_runs;        //{ +0x0000    } | .NumberOfRuns
        _m01 uint32_t                                        number_of_valid_runs;  //{ +0x0004    } | .NumberOfValidRuns
        _m02 sdk::array<struct nt::physical_memory_run_t, 1> run;                   //{ +0x0008    } | .Run
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_EXTENTS_DESCRIPTOR.$", 0x0, false, 0xfec4df9608ec6e96 );                     
        SDK_FIXED_SIZE( physical_extents_descriptor_t, 0x18 );                     
    };                                                                            
};
#include "magic/physical_extents_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::physical_extents_descriptor_t, 0x18 );
