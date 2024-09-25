#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdmaenabler_t; }

#include "magic/evt_dma_enabler_self_managed_io_stop_callback_t.start.hpp"
namespace fx
{
    // [class FxEvtDmaEnablerSelfManagedIoStopCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class evt_dma_enabler_self_managed_io_stop_callback_t
    {                                                    
        using m_method_t = sdk::function<int32_t(struct wdf::wdfdmaenabler_t*)>*;         
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 m_method_t  m_method;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
        _m01 int32_t     m_status;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Status
                                                         
        SDK_MAGIC_PROPERTIES( "FxEvtDmaEnablerSelfManagedIoStopCallback.$", 0x10, true, 0x334baf1e734aae7d );         
        SDK_FIXED_SIZE( evt_dma_enabler_self_managed_io_stop_callback_t, 0x10 );         
    };                                                   
};
#include "magic/evt_dma_enabler_self_managed_io_stop_callback_t.end.hpp"
SDK_VERIFY( class fx::evt_dma_enabler_self_managed_io_stop_callback_t, 0x10 );
