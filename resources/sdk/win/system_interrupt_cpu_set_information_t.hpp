#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_interrupt_cpu_set_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_INTERRUPT_CPU_SET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_interrupt_cpu_set_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t gsiv;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Gsiv
        _m01 uint16_t group;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Group
        _m02 uint64_t cpu_sets;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CpuSets
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_INTERRUPT_CPU_SET_INFORMATION.$", 0x10, true, 0x2d16136f8d0ef18e );         
        SDK_FIXED_SIZE( system_interrupt_cpu_set_information_t, 0x10 );         
    };                                           
};
#include "magic/system_interrupt_cpu_set_information_t.end.hpp"
SDK_VERIFY( struct win::system_interrupt_cpu_set_information_t, 0x10 );
