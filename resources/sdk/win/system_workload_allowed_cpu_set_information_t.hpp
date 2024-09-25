#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_workload_allowed_cpu_set_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_WORKLOAD_ALLOWED_CPU_SET_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_workload_allowed_cpu_set_information_t
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint64_t                workload_class;      //{ +0x0000    +0x0000    +0x0000    } | .WorkloadClass
        _m01 sdk::array<uint64_t, 1> cpu_sets;            //{ +0x0008    +0x0008    +0x0008    } | .CpuSets
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_WORKLOAD_ALLOWED_CPU_SET_INFORMATION.$", 0x10, true, 0x2ff201054b3439fd );               
        SDK_FIXED_SIZE( system_workload_allowed_cpu_set_information_t, 0x10 );               
    };                                                  
};
#include "magic/system_workload_allowed_cpu_set_information_t.end.hpp"
SDK_VERIFY( struct win::system_workload_allowed_cpu_set_information_t, 0x10 );
