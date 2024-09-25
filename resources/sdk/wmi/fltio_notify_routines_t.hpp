#pragma once
#include <sdkgen/support_library.hpp>

namespace etw { struct kernel_trace_timestamp_t; }
namespace nt  { struct file_object_t;            }
namespace nt  { struct irp_t;                    }

#include "magic/fltio_notify_routines_t.start.hpp"
namespace wmi
{
    // [struct _WMI_FLTIO_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fltio_notify_routines_t                                            
    {                                                                         
        using time_stamp_routine_t =             sdk::function<void(struct etw::kernel_trace_timestamp_t*, uint32_t)>*;                               
        using failure_notify_routine_t =         sdk::function<void(void*, uint32_t, uint32_t, uint16_t)>*;                               
        using initiation_notify_routine_t =      sdk::function<void(void*, uint32_t, uint32_t, uint16_t)>*;                               
        using completion_notify_routine_t =      sdk::function<void(void*, uint32_t, uint32_t, uint16_t, struct etw::kernel_trace_timestamp_t*)>*;                               
        using fast_completion_notify_routine_t = sdk::function<void(void*, uint32_t, uint32_t, uint16_t, struct etw::kernel_trace_timestamp_t*)>*;                               
        using io_redirection_notify_routine_t =  sdk::function<void(struct nt::irp_t*, struct nt::file_object_t*)>*;                               
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m00 time_stamp_routine_t              time_stamp_routine;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeStampRoutine
        _m01 failure_notify_routine_t          failure_notify_routine;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FailureNotifyRoutine
        _m02 initiation_notify_routine_t       initiation_notify_routine;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InitiationNotifyRoutine
        _m03 completion_notify_routine_t       completion_notify_routine;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletionNotifyRoutine
        _m04 fast_completion_notify_routine_t  fast_completion_notify_routine;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FastCompletionNotifyRoutine
        _m05 io_redirection_notify_routine_t   io_redirection_notify_routine;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoRedirectionNotifyRoutine
                                                                              
        SDK_MAGIC_PROPERTIES( "_WMI_FLTIO_NOTIFY_ROUTINES.$", 0x30, true, 0x6cc7597a6d306926 );                               
        SDK_FIXED_SIZE( fltio_notify_routines_t, 0x30 );                               
    };                                                                        
};
#include "magic/fltio_notify_routines_t.end.hpp"
SDK_VERIFY( struct wmi::fltio_notify_routines_t, 0x30 );
