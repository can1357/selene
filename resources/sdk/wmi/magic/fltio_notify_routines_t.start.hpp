#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct etw::kernel_trace_timestamp_t*, uint32_t)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.TimeStampRoutine", time_stamp_routine, 0x0, 0x40, true, 0xb8a03178f40eb6ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint16_t)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.FailureNotifyRoutine", failure_notify_routine, 0x40, 0x40, true, 0xde7a596ac3e7322)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint16_t)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.InitiationNotifyRoutine", initiation_notify_routine, 0x80, 0x40, true, 0x865b02480fee8d9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint16_t, struct etw::kernel_trace_timestamp_t*)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.CompletionNotifyRoutine", completion_notify_routine, 0xc0, 0x40, true, 0x6cada2f92503e4c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint16_t, struct etw::kernel_trace_timestamp_t*)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.FastCompletionNotifyRoutine", fast_completion_notify_routine, 0x100, 0x40, true, 0xbb7f992ca8234a70)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*, struct nt::file_object_t*)>*), "_WMI_FLTIO_NOTIFY_ROUTINES.IoRedirectionNotifyRoutine", io_redirection_notify_routine, 0x140, 0x40, true, 0x670f8fe046f6d3bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif