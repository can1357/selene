#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wow64_cpuarea_info_t.start.hpp"
namespace win
{
    struct arm_context_t;
    struct x86_context_t;
    struct amd64_context_t;
    struct arm64_context_t;
    struct x86_nt5_context_t;

    // [struct _WOW64_CPUAREA_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wow64_cpuarea_info_t                                                        
    {                                                                                  
        using context_x86_t = sdk::variant<struct win::x86_context_t*, struct win::x86_nt5_context_t*>;                                             
                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                             
        _m00 void*                        context;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 context_x86_t                context_x86;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextX86
        _m02 struct win::amd64_context_t* context_amd64;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextAmd64
        _m03 struct win::arm_context_t*   context_arm;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextArm
        _m04 struct win::arm64_context_t* context_arm64;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextArm64
        _m05 void**                       per_thread_data_location;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerThreadDataLocation
        _m06 uint32_t*                    context_flags_location;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContextFlagsLocation
        _m07 uint32_t*                    cpu_area_flags_location;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CpuAreaFlagsLocation
        _m08 uint32_t                     arch_context_flag;                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ArchContextFlag
        _m09 uint16_t                     machine;                                       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Machine
                                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                             
        _m10 volatile int32_t*            kernel_write_to_executable_signaled_location;  //{ +0x0028    +0x0028    +0x0028    } | .KernelWriteToExecutableSignaledLocation
                                                                                       
        SDK_MAGIC_PROPERTIES( "_WOW64_CPUAREA_INFO.$", 0x30, true, 0xef2bbbc217b95086 );                                             
        SDK_DYNAMIC_SIZE( wow64_cpuarea_info_t );                                             
    };                                                                                 
};
#include "magic/wow64_cpuarea_info_t.end.hpp"
