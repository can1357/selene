#pragma once
#include <sdkgen/support_library.hpp>
#include "common_context_header_t.hpp"
#include "../wdf/pnppower_event_callbacks_t.hpp"

#include "magic/wdfdevicecreate_context_t.start.hpp"
namespace verf
{
    // [struct _VF_WDFDEVICECREATE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfdevicecreate_context_t                                                   
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                             
        _m00 struct verf::common_context_header_t   common_header;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CommonHeader
        _m01 struct wdf::pnppower_event_callbacks_t pnp_power_event_callbacks_original;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PnpPowerEventCallbacksOriginal
                                                                                       
        SDK_MAGIC_PROPERTIES( "_VF_WDFDEVICECREATE_CONTEXT.$", 0x98, true, 0xe206f337bc3a95cd );                                   
        SDK_FIXED_SIZE( wdfdevicecreate_context_t, 0x98 );                                   
    };                                                                                 
};
#include "magic/wdfdevicecreate_context_t.end.hpp"
SDK_VERIFY( struct verf::wdfdevicecreate_context_t, 0x98 );
