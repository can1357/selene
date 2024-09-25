#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/splitio_notify_routines_t.start.hpp"
namespace wmi
{
    // [struct _WMI_SPLITIO_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct splitio_notify_routines_t                                            
    {                                                                           
        using pwmi_splitio_operation_notify_routine_t = sdk::function<void(struct nt::irp_t*, struct nt::irp_t*, uint16_t)>*;                          
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                      
        _m00 pwmi_splitio_operation_notify_routine_t  initiation_notify_routine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitiationNotifyRoutine
                                                                                
        SDK_MAGIC_PROPERTIES( "_WMI_SPLITIO_NOTIFY_ROUTINES.$", 0x8, true, 0x3376f6bb38c7bd0c );                          
        SDK_FIXED_SIZE( splitio_notify_routines_t, 0x8 );                          
    };                                                                          
};
#include "magic/splitio_notify_routines_t.end.hpp"
SDK_VERIFY( struct wmi::splitio_notify_routines_t, 0x8 );
