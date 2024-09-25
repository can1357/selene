#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_interrupt_steering_information_output_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_interrupt_steering_information_output_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint1_t  enabled;                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Enabled
        _m01 uint32_t as_ulong;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_INTERRUPT_STEERING_INFORMATION_OUTPUT.$", 0x4, true, 0x5ba1034466440b1b );         
        SDK_FIXED_SIZE( system_interrupt_steering_information_output_t, 0x4 );         
    };                                                   
};
#include "magic/system_interrupt_steering_information_output_t.end.hpp"
SDK_VERIFY( struct win::system_interrupt_steering_information_output_t, 0x4 );
