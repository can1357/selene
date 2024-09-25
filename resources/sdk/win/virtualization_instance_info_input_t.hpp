#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualization_instance_info_input_t.start.hpp"
namespace win
{
    // [struct _VIRTUALIZATION_INSTANCE_INFO_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct virtualization_instance_info_input_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t flags;                     //{ +0x0004    +0x0000    +0x0004    +0x0004    +0x0004    } | .Flags
                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m01 uint32_t number_of_worker_threads;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfWorkerThreads
                                               
        SDK_MAGIC_PROPERTIES( "_VIRTUALIZATION_INSTANCE_INFO_INPUT.$", 0x8, true, 0x9f42f6064cf68e7c );                         
        SDK_DYNAMIC_SIZE( virtualization_instance_info_input_t );                         
    };                                         
};
#include "magic/virtualization_instance_info_input_t.end.hpp"
