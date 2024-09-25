#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_basic_information64_t.start.hpp"
namespace win
{
    // [struct _PROCESS_BASIC_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_basic_information64_t               
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 int32_t  exit_status;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExitStatus
        _m01 uint64_t peb_base_address;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PebBaseAddress
        _m02 uint64_t affinity_mask;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AffinityMask
        _m03 int32_t  base_priority;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BasePriority
        _m04 uint64_t unique_process_id;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UniqueProcessId
        _m05 uint64_t inherited_from_unique_process_id;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InheritedFromUniqueProcessId
                                                       
        SDK_MAGIC_PROPERTIES( "_PROCESS_BASIC_INFORMATION64.$", 0x30, true, 0x987542dd18e47b3e );                                 
        SDK_FIXED_SIZE( process_basic_information64_t, 0x30 );                                 
    };                                                 
};
#include "magic/process_basic_information64_t.end.hpp"
SDK_VERIFY( struct win::process_basic_information64_t, 0x30 );
