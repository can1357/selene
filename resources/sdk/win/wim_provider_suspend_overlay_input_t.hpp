#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_suspend_overlay_input_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_SUSPEND_OVERLAY_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wim_provider_suspend_overlay_input_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t data_source_id;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSourceId
                                               
        SDK_NONVOL_PROPERTIES( "_WIM_PROVIDER_SUSPEND_OVERLAY_INPUT.$", 0x8, true, 0x7e0f4db3bc1973ed );               
        SDK_FIXED_SIZE( wim_provider_suspend_overlay_input_t, 0x8 );               
    };                                         
};
#include "magic/wim_provider_suspend_overlay_input_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_suspend_overlay_input_t, 0x8 );
