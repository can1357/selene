#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_diskio_completion_notify_routine_t ), "_WMI_DISKIO_NOTIFY_ROUTINES.CompletionNotifyRoutine", completion_notify_routine, 0x0, 0x40, true, 0x6ff5d7f6343d9835)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "_WMI_DISKIO_NOTIFY_ROUTINES.InitiationNotifyRoutine", initiation_notify_routine, 0x40, 0x40, true, 0xd0f2ef17bce40d6a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_opticalio_completion_notify_routine_t ), "_WMI_DISKIO_NOTIFY_ROUTINES.OpticalCompletionRoutine", optical_completion_routine, 0x80, 0x40, true, 0xe009e5052410ce07)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::irp_t*)>*), "_WMI_DISKIO_NOTIFY_ROUTINES.OpticalInitiationRoutine", optical_initiation_routine, 0xc0, 0x40, true, 0x76bba69640308b0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif