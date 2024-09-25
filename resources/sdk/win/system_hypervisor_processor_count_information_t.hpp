#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_hypervisor_processor_count_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HYPERVISOR_PROCESSOR_COUNT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hypervisor_processor_count_information_t
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t number_of_logical_processors;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfLogicalProcessors
        _m01 uint32_t number_of_cores;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfCores
                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HYPERVISOR_PROCESSOR_COUNT_INFORMATION.$", 0x8, true, 0xc2409eff0a65e4c6 );                             
        SDK_FIXED_SIZE( system_hypervisor_processor_count_information_t, 0x8 );                             
    };                                                    
};
#include "magic/system_hypervisor_processor_count_information_t.end.hpp"
SDK_VERIFY( struct win::system_hypervisor_processor_count_information_t, 0x8 );
