#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wow64_architecture_information_t.start.hpp"
namespace win
{
    // [struct _WOW64_ARCHITECTURE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct wow64_architecture_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2               
        //                           
        _m00 uint16_t machine;               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Machine
        _m01 uint1_t  kernel_mode;           //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .KernelMode
        _m02 uint1_t  user_mode;             //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .UserMode
        _m03 uint1_t  native;                //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .Native
        _m04 uint1_t  process;               //{ +0x0000@19 +0x0000@19 +0x0000@19 } | .Process
        _m05 uint12_t reserved_zero0;        //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .ReservedZero0
                                           
        SDK_MAGIC_PROPERTIES( "_WOW64_ARCHITECTURE_INFORMATION.$", 0x4, true, 0x95e4d3e151e0c216 );               
        SDK_FIXED_SIZE( wow64_architecture_information_t, 0x4 );               
    };                                     
};
#include "magic/wow64_architecture_information_t.end.hpp"
SDK_VERIFY( struct win::wow64_architecture_information_t, 0x4 );
