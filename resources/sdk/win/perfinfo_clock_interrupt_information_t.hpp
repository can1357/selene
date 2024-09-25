#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_clock_interrupt_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CLOCK_INTERRUPT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_clock_interrupt_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t interrupt_time;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptTime
        _m01 int16_t  flags;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CLOCK_INTERRUPT_INFORMATION.$", 0x10, true, 0xba2789a318dbcedc );               
        SDK_FIXED_SIZE( perfinfo_clock_interrupt_information_t, 0x10 );               
    };                                           
};
#include "magic/perfinfo_clock_interrupt_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_clock_interrupt_information_t, 0x10 );
