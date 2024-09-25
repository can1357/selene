#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_parameter_hypervisor_extension_t.start.hpp"
namespace nt
{
    // [struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_parameter_hypervisor_extension_t                 
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                         
        _m00 uint32_t initial_hypervisor_crashdump_area_page_count;  //{ +0x0000    +0x0000    +0x0000    } | .InitialHypervisorCrashdumpAreaPageCount
        _m01 uint32_t hypervisor_crashdump_area_page_count;          //{ +0x0004    +0x0004    +0x0004    } | .HypervisorCrashdumpAreaPageCount
        _m02 uint64_t initial_hypervisor_crashdump_area_spa;         //{ +0x0008    +0x0008    +0x0008    } | .InitialHypervisorCrashdumpAreaSpa
        _m03 uint64_t hypervisor_crashdump_area_spa;                 //{ +0x0010    +0x0010    +0x0010    } | .HypervisorCrashdumpAreaSpa
        _m04 uint64_t hypervisor_launch_status;                      //{ +0x0018    +0x0018    +0x0018    } | .HypervisorLaunchStatus
        _m05 uint64_t hypervisor_launch_status_arg1;                 //{ +0x0020    +0x0020    +0x0020    } | .HypervisorLaunchStatusArg1
        _m06 uint64_t hypervisor_launch_status_arg2;                 //{ +0x0028    +0x0028    +0x0028    } | .HypervisorLaunchStatusArg2
        _m07 uint64_t hypervisor_launch_status_arg3;                 //{ +0x0030    +0x0030    +0x0030    } | .HypervisorLaunchStatusArg3
        _m08 uint64_t hypervisor_launch_status_arg4;                 //{ +0x0038    +0x0038    +0x0038    } | .HypervisorLaunchStatusArg4
                                                                   
        // Windows 11                                              
        //                                                         
        _m09 void*    range_array;                                   //{ +0x0028    } | .RangeArray
        _m10 uint32_t range_count;                                   //{ +0x0030    } | .RangeCount
                                                                   
        SDK_MAGIC_PROPERTIES( "_LOADER_PARAMETER_HYPERVISOR_EXTENSION.$", 0x40, true, 0x1903577fb5fe86dc );                                             
        SDK_FIXED_SIZE( loader_parameter_hypervisor_extension_t, 0x40 );                                             
    };                                                             
};
#include "magic/loader_parameter_hypervisor_extension_t.end.hpp"
SDK_VERIFY( struct nt::loader_parameter_hypervisor_extension_t, 0x40 );
