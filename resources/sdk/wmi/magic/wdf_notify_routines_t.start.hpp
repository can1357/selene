#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_WDF_NOTIFY_ROUTINES.Size", size, 0x0, 0x20, true, 0x10e80f940718dde8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_wdf_notify_routine_t ), "_WMI_WDF_NOTIFY_ROUTINES.DpcNotifyRoutine", dpc_notify_routine, 0x40, 0x40, true, 0x93fa52ee0308b301)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_wdf_notify_routine_t ), "_WMI_WDF_NOTIFY_ROUTINES.InterruptNotifyRoutine", interrupt_notify_routine, 0x80, 0x40, true, 0x265824be0ee8afd0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwmi_wdf_notify_routine_t ), "_WMI_WDF_NOTIFY_ROUTINES.WorkItemNotifyRoutine", work_item_notify_routine, 0xc0, 0x40, true, 0x199489a4daef4604)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif