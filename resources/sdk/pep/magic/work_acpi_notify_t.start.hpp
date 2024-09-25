#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_ACPI_NOTIFY.DeviceHandle", device_handle, 0x0, 0x40, true, 0x60ce3360f455f25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_ACPI_NOTIFY.NotifyCode", notify_code, 0x40, 0x20, true, 0x5db59e331c1cc580)
#else
#define _m00
#define _m01
#endif