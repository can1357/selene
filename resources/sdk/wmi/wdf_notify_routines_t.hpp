#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdf_notify_routines_t.start.hpp"
namespace wmi
{
    // [struct _WMI_WDF_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdf_notify_routines_t                                 
    {                                                            
        using pwmi_wdf_notify_routine_t = sdk::function<void(void*, uint32_t, uint32_t, uint16_t, uint8_t)>*;                         
        using pwmi_wdf_notify_routine_t = sdk::function<void(void*, uint32_t, uint32_t, uint16_t, uint8_t)>*;                         
        using pwmi_wdf_notify_routine_t = sdk::function<void(void*, uint32_t, uint32_t, uint16_t, uint8_t)>*;                         
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                       
        _m00 uint32_t                   size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 pwmi_wdf_notify_routine_t  dpc_notify_routine;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcNotifyRoutine
        _m02 pwmi_wdf_notify_routine_t  interrupt_notify_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterruptNotifyRoutine
        _m03 pwmi_wdf_notify_routine_t  work_item_notify_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkItemNotifyRoutine
                                                                 
        SDK_MAGIC_PROPERTIES( "_WMI_WDF_NOTIFY_ROUTINES.$", 0x20, true, 0xe0286cd5b23db78b );                         
        SDK_FIXED_SIZE( wdf_notify_routines_t, 0x20 );                         
    };                                                           
};
#include "magic/wdf_notify_routines_t.end.hpp"
SDK_VERIFY( struct wmi::wdf_notify_routines_t, 0x20 );
