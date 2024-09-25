#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_diskio_completion_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.DiskIoCompletionRoutine", disk_io_completion_routine, 0x0, 0x40, true, 0x6cf8a734949eda97)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.DiskIoInitiationRoutine", disk_io_initiation_routine, 0x40, 0x40, true, 0x640b9fc0d6e16763)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_opticalio_completion_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.OpticalCompletionRoutine", optical_completion_routine, 0x80, 0x40, true, 0xd73e512fcd6607cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.OpticalInitiationRoutine", optical_initiation_routine, 0xc0, 0x40, true, 0xb413c76376235d68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, nt::unicode_view*, uint32_t, uint16_t)>*, sdk::function<void(struct nt::eprocess_t*, void*, nt::unicode_view*, struct nt::ejob_t*, uint32_t, uint16_t)>*>), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FileNameRoutine", file_name_routine, 0x100, 0x40, true, 0x29e02e42f37ea197)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FileInitiationRoutine", file_initiation_routine, 0x140, 0x40, true, 0xd940a6cd9fe777ed)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*, sdk::function<void(struct nt::ethread_t*, struct nt::event_data_descriptor_t*, uint32_t, uint32_t, uint16_t, struct nt::guid_t*)>*>), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FileCompletionRoutine", file_completion_routine, 0x180, 0x40, true, 0xc9fc71732a49ebdd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptdi_data_request_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.TdiRoutine", tdi_routine, 0x1c0, 0x40, true, 0xb73d7fe7fa537e79)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_splitio_operation_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.SplitIoRoutine", split_io_routine, 0x200, 0x40, true, 0xcdb64bcb728205c7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_fltio_operation_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FltIoInitiationRoutine", flt_io_initiation_routine, 0x240, 0x40, true, 0x4a31354e6cacbf5a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_fltio_timed_operation_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FltIoCompletionRoutine", flt_io_completion_routine, 0x280, 0x40, true, 0xb9298112b667de27)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(petw_kernel_trace_timestamp_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.KernelTraceTimeStampRoutine", kernel_trace_time_stamp_routine, 0x2c0, 0x40, true, 0x50077d21d0db5aff)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_wdf_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.WdfRoutine", wdf_routine, 0x300, 0x40, true, 0x19fbcef731356f89)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_wdf_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.WdfSystemRoutine", wdf_system_routine, 0x340, 0x40, true, 0x61f520ea9ec0ff9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_fltio_io_redirection_notify_routine_t ), "_ETW_ALL_POSSIBLE_NOTIFY_ROUTINES.FltIoRedirectionNotifyRoutine", flt_io_redirection_notify_routine, 0x380, 0x40, true, 0xea7fe3dd17abd898)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif