#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/diskio_notify_routines_t.start.hpp"
namespace wmi
{
    // [struct _WMI_DISKIO_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_notify_routines_t                                                 
    {                                                                               
        using pwmi_diskio_completion_notify_routine_t =    sdk::function<void(uint32_t, uint32_t, struct nt::irp_t*)>*;                           
        using pwmi_opticalio_completion_notify_routine_t = sdk::function<void(uint32_t, uint32_t, struct nt::irp_t*, int64_t)>*;                           
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m00 pwmi_diskio_completion_notify_routine_t     completion_notify_routine;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompletionNotifyRoutine
        _m01 sdk::function<void(struct nt::irp_t*)>*     initiation_notify_routine;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitiationNotifyRoutine
        _m02 pwmi_opticalio_completion_notify_routine_t  optical_completion_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpticalCompletionRoutine
        _m03 sdk::function<void(struct nt::irp_t*)>*     optical_initiation_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OpticalInitiationRoutine
                                                                                    
        SDK_MAGIC_PROPERTIES( "_WMI_DISKIO_NOTIFY_ROUTINES.$", 0x20, true, 0x56d98fd8920fea94 );                           
        SDK_FIXED_SIZE( diskio_notify_routines_t, 0x20 );                           
    };                                                                              
};
#include "magic/diskio_notify_routines_t.end.hpp"
SDK_VERIFY( struct wmi::diskio_notify_routines_t, 0x20 );
