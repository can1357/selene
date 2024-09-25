#pragma once
#include <sdkgen/support_library.hpp>
#include "timeline_bitmap_t.hpp"

#include "magic/thread_energy_values_t.start.hpp"
namespace nt
{
    // [struct _THREAD_ENERGY_VALUES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_energy_values_t                                         
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 sdk::array<sdk::array<uint64_t, 2>, 4> cycles;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cycles
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m01 sdk::array<sdk::array<uint64_t, 2>, 4> attributed_cycles;      //{ +0x0040    +0x0040    +0x0040    } | .AttributedCycles
        _m02 sdk::array<sdk::array<uint64_t, 2>, 4> work_on_behalf_cycles;  //{ +0x0080    +0x0080    +0x0080    } | .WorkOnBehalfCycles
        _m03 union nt::timeline_bitmap_t            cpu_timeline;           //{ +0x00c0    +0x00c0    +0x00c0    } | .CpuTimeline
                                                                          
        SDK_MAGIC_PROPERTIES( "_THREAD_ENERGY_VALUES.$", 0xc8, true, 0xc8aab1e1e7813880 );                      
        SDK_DYNAMIC_SIZE( thread_energy_values_t );                       
    };                                                                    
};
#include "magic/thread_energy_values_t.end.hpp"
