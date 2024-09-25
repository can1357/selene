#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_control_flags_information_t.start.hpp"
namespace win
{
    // [struct _KEY_CONTROL_FLAGS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_control_flags_information_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t control_flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlFlags
                                          
        SDK_NONVOL_PROPERTIES( "_KEY_CONTROL_FLAGS_INFORMATION.$", 0x4, true, 0xa31c56f25e57e778 );              
        SDK_FIXED_SIZE( key_control_flags_information_t, 0x4 );              
    };                                    
};
#include "magic/key_control_flags_information_t.end.hpp"
SDK_VERIFY( struct win::key_control_flags_information_t, 0x4 );
