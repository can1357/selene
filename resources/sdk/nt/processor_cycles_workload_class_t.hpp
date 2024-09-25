#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_cycles_workload_class_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_CYCLES_WORKLOAD_CLASS]
    // => Windows 11
    //
    struct processor_cycles_workload_class_t                
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 uint32_t                count;                   //{ +0x0000    } | .Count
        _m01 sdk::array<uint64_t, 1> processor_cycles_class;  //{ +0x0008    } | .ProcessorCyclesClass
                                                            
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_CYCLES_WORKLOAD_CLASS.$", 0x0, false, 0x78fd758be9abc054 );                       
        SDK_FIXED_SIZE( processor_cycles_workload_class_t, 0x10 );                       
    };                                                      
};
#include "magic/processor_cycles_workload_class_t.end.hpp"
SDK_VERIFY( struct nt::processor_cycles_workload_class_t, 0x10 );
