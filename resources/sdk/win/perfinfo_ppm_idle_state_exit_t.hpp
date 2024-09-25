#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_idle_state_exit_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_IDLE_STATE_EXIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_idle_state_exit_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t state;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint32_t status;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_IDLE_STATE_EXIT.$", 0x8, true, 0x192b57b48945fcd4 );       
        SDK_FIXED_SIZE( perfinfo_ppm_idle_state_exit_t, 0x8 );       
    };                                   
};
#include "magic/perfinfo_ppm_idle_state_exit_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_idle_state_exit_t, 0x8 );
