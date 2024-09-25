#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "WDFCXDEVICE_INIT.ListEntry", list_entry, 0x0, 0x80, true, 0x2aaae0403a6b055e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "WDFCXDEVICE_INIT.ClientDriverGlobals", client_driver_globals, 0x80, 0x40, true, 0xf32782010c1911f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "WDFCXDEVICE_INIT.CxDriverGlobals", cx_driver_globals, 0xc0, 0x40, true, 0x3f5a156c4a240c5e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::irp_preprocess_info_t*), "WDFCXDEVICE_INIT.PreprocessInfo", preprocess_info, 0x100, 0x40, true, 0x674bc091963a50d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_in_caller_context_t ), "WDFCXDEVICE_INIT.IoInCallerContextCallback", io_in_caller_context_callback, 0x140, 0x40, true, 0xff6733e6137cb154)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "WDFCXDEVICE_INIT.RequestAttributes", request_attributes, 0x180, 0xc0, true, 0x9fa6ba61661c6ceb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::cx_file_object_init_t), "WDFCXDEVICE_INIT.FileObject", file_object, 0x340, 0x80, true, 0x14a55c961aaf4549)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::cx_pnp_power_callbacks_init_t), "WDFCXDEVICE_INIT.PnpPowerCallbacks", pnp_power_callbacks, 0x6c0, 0x80, true, 0xd731c848f349191d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cx_device_info_t*), "WDFCXDEVICE_INIT.CxDeviceInfo", cx_device_info, 0x1440, 0x40, true, 0x6d3ffda188100cf6)
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
#endif