#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_idle_state_change_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_IDLE_STATE_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_idle_state_change_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t new_state;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NewState
        _m01 uint32_t old_state;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OldState
        _m02 uint64_t processors;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Processors
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_IDLE_STATE_CHANGE.$", 0x10, true, 0x43fd7f5e6302aaa1 );           
        SDK_FIXED_SIZE( perfinfo_ppm_idle_state_change_t, 0x10 );           
    };                                     
};
#include "magic/perfinfo_ppm_idle_state_change_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_idle_state_change_t, 0x10 );
