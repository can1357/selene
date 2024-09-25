#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIrpDynamicDispatchInfo.ListEntry", list_entry, 0x0, 0x80, true, 0xafa4b69730e9560f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cx_device_info_t*), "FxIrpDynamicDispatchInfo.CxDeviceInfo", cx_device_info, 0x280, 0x40, true, 0xf07aefb3e1929d89)
#else
#define _m00
#define _m01
#endif