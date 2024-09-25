#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PO_NOTIFY_DEVICE_COMPLETE.Irp", irp, 0x0, 0x40, true, 0xfc0473e7cd8c38da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_PO_NOTIFY_DEVICE_COMPLETE.Status", status, 0x40, 0x20, true, 0x368fa3e2f18a4d48)
#else
#define _m00
#define _m01
#endif