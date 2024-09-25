#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ejob_t;                  }
namespace nt { struct eprocess_t;              }
namespace nt { struct ethread_t;               }
namespace nt { struct event_data_descriptor_t; }
namespace nt { struct file_object_t;           }
namespace nt { struct guid_t;                  }
namespace nt { struct irp_t;                   }

#include "magic/all_possible_notify_routines_t.start.hpp"
namespace etw
{
    struct kernel_trace_timestamp_t;

    // [struct _ETW_ALL_POSSIBLE_NOTIFY_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct all_possible_notify_routines_t                                                   
    {                                                                                       
        using pwmi_diskio_completion_notify_routine_t =     sdk::function<void(uint32_t, uint32_t, struct nt::irp_t*)>*;                                  
        using pwmi_opticalio_completion_notify_routine_t =  sdk::function<void(uint32_t, uint32_t, struct nt::irp_t*, int64_t)>*;                                  
        using file_name_routine_t =                         sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>;                                  
        using file_initiation_routine_t =                   sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>;                                  
        using file_completion_routine_t =                   sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>;                                  
        using ptdi_data_request_notify_routine_t =          sdk::function<void(uint32_t, void*, uint32_t, struct nt::ethread_t*)>*;                                  
        using pwmi_splitio_operation_notify_routine_t =     sdk::function<void(struct nt::irp_t*, struct nt::irp_t*, uint16_t)>*;                                  
        using pwmi_fltio_operation_notify_routine_t =       sdk::function<void(void*, uint32_t, uint32_t, uint16_t)>*;                                  
        using pwmi_fltio_timed_operation_notify_routine_t = sdk::function<void(void*, uint32_t, uint32_t, uint16_t, struct etw::kernel_trace_timestamp_t*)>*;                                  
        using petw_kernel_trace_timestamp_routine_t =       sdk::function<void(struct etw::kernel_trace_timestamp_t*, uint32_t)>*;                                  
        using pwmi_wdf_notify_routine_t =                   sdk::function<void(void*, uint32_t, uint32_t, uint16_t, uint8_t)>*;                                  
        using pwmi_wdf_notify_routine_t =                   sdk::function<void(void*, uint32_t, uint32_t, uint16_t, uint8_t)>*;                                  
        using pwmi_fltio_io_redirection_notify_routine_t =  sdk::function<void(struct nt::irp_t*, struct nt::file_object_t*)>*;                                  
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                  
        _m00 pwmi_diskio_completion_notify_routine_t      disk_io_completion_routine;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskIoCompletionRoutine
        _m01 sdk::function<void(struct nt::irp_t*)>*      disk_io_initiation_routine;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DiskIoInitiationRoutine
        _m02 pwmi_opticalio_completion_notify_routine_t   optical_completion_routine;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpticalCompletionRoutine
        _m03 sdk::function<void(struct nt::irp_t*)>*      optical_initiation_routine;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OpticalInitiationRoutine
        _m04 file_name_routine_t                          file_name_routine;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FileNameRoutine
        _m05 file_initiation_routine_t                    file_initiation_routine;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileInitiationRoutine
        _m06 file_completion_routine_t                    file_completion_routine;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FileCompletionRoutine
        _m07 ptdi_data_request_notify_routine_t           tdi_routine;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TdiRoutine
        _m08 pwmi_splitio_operation_notify_routine_t      split_io_routine;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SplitIoRoutine
        _m09 pwmi_fltio_operation_notify_routine_t        flt_io_initiation_routine;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FltIoInitiationRoutine
        _m10 pwmi_fltio_timed_operation_notify_routine_t  flt_io_completion_routine;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FltIoCompletionRoutine
        _m11 petw_kernel_trace_timestamp_routine_t        kernel_trace_time_stamp_routine;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .KernelTraceTimeStampRoutine
        _m12 pwmi_wdf_notify_routine_t                    wdf_routine;                        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WdfRoutine
        _m13 pwmi_wdf_notify_routine_t                    wdf_system_routine;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .WdfSystemRoutine
        _m14 pwmi_fltio_io_redirection_notify_routine_t   flt_io_redirection_notify_routine;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .FltIoRedirectionNotifyRoutine
                                                                                            
        SDK_MAGIC_PROPERTIES( "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.$", 0x78, true, 0x17d42531c1e7900c );                                  
        SDK_FIXED_SIZE( all_possible_notify_routines_t, 0x78 );                                  
    };                                                                                      
};
#include "magic/all_possible_notify_routines_t.end.hpp"
SDK_VERIFY( struct etw::all_possible_notify_routines_t, 0x78 );
