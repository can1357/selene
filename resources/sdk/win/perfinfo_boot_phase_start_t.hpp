#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_boot_phase_start_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_BOOT_PHASE_START]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_boot_phase_start_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t phase;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Phase
                                      
        SDK_MAGIC_PROPERTIES( "_PERFINFO_BOOT_PHASE_START.$", 0x4, true, 0xf5ea6df792785beb );      
        SDK_FIXED_SIZE( perfinfo_boot_phase_start_t, 0x4 );      
    };                                
};
#include "magic/perfinfo_boot_phase_start_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_boot_phase_start_t, 0x4 );
