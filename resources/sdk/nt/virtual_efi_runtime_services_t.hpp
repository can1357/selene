#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_efi_runtime_services_t.start.hpp"
namespace nt
{
    // [struct _VIRTUAL_EFI_RUNTIME_SERVICES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct virtual_efi_runtime_services_t           
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint64_t get_time;                       //{ +0x0000    +0x0000    +0x0000    } | .GetTime
        _m01 uint64_t set_time;                       //{ +0x0008    +0x0008    +0x0008    } | .SetTime
        _m02 uint64_t get_wakeup_time;                //{ +0x0010    +0x0010    +0x0010    } | .GetWakeupTime
        _m03 uint64_t set_wakeup_time;                //{ +0x0018    +0x0018    +0x0018    } | .SetWakeupTime
        _m04 uint64_t set_virtual_address_map;        //{ +0x0020    +0x0020    +0x0020    } | .SetVirtualAddressMap
        _m05 uint64_t convert_pointer;                //{ +0x0028    +0x0028    +0x0028    } | .ConvertPointer
        _m06 uint64_t get_variable;                   //{ +0x0030    +0x0030    +0x0030    } | .GetVariable
        _m07 uint64_t get_next_variable_name;         //{ +0x0038    +0x0038    +0x0038    } | .GetNextVariableName
        _m08 uint64_t set_variable;                   //{ +0x0040    +0x0040    +0x0040    } | .SetVariable
        _m09 uint64_t get_next_high_monotonic_count;  //{ +0x0048    +0x0048    +0x0048    } | .GetNextHighMonotonicCount
        _m10 uint64_t reset_system;                   //{ +0x0050    +0x0050    +0x0050    } | .ResetSystem
        _m11 uint64_t update_capsule;                 //{ +0x0058    +0x0058    +0x0058    } | .UpdateCapsule
        _m12 uint64_t query_capsule_capabilities;     //{ +0x0060    +0x0060    +0x0060    } | .QueryCapsuleCapabilities
        _m13 uint64_t query_variable_info;            //{ +0x0068    +0x0068    +0x0068    } | .QueryVariableInfo
                                                    
        SDK_MAGIC_PROPERTIES( "_VIRTUAL_EFI_RUNTIME_SERVICES.$", 0x70, true, 0x197a8a64464a868c );                              
        SDK_FIXED_SIZE( virtual_efi_runtime_services_t, 0x70 );                              
    };                                              
};
#include "magic/virtual_efi_runtime_services_t.end.hpp"
SDK_VERIFY( struct nt::virtual_efi_runtime_services_t, 0x70 );
