#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_control_integrity_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_CONTROL_INTEGRITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wim_provider_control_integrity_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t control_code;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlCode
                                           
        SDK_MAGIC_PROPERTIES( "_WIM_PROVIDER_CONTROL_INTEGRITY.$", 0x4, true, 0x149acc2e9a421992 );             
        SDK_FIXED_SIZE( wim_provider_control_integrity_t, 0x4 );             
    };                                     
};
#include "magic/wim_provider_control_integrity_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_control_integrity_t, 0x4 );
