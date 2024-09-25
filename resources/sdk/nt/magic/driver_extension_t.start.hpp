#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_DRIVER_EXTENSION.DriverObject", driver_object, 0x0, 0x40, true, 0x2f0166798377289d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pdriver_add_device_t ), "_DRIVER_EXTENSION.AddDevice", add_device, 0x40, 0x40, true, 0x52165cbe5cb8457f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVER_EXTENSION.Count", count, 0x80, 0x20, true, 0x155ab6fe1294db6b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DRIVER_EXTENSION.ServiceKeyName", service_key_name, 0xc0, 0x80, true, 0x9100823fbd060f3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::client_extension_t*), "_DRIVER_EXTENSION.ClientDriverExtension", client_driver_extension, 0x140, 0x40, true, 0xf6ff4f7a7eb36ae8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct fs::filter_callbacks_t*), "_DRIVER_EXTENSION.FsFilterCallbacks", fs_filter_callbacks, 0x180, 0x40, true, 0x96ed1fbb26b46570)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_EXTENSION.KseCallbacks", kse_callbacks, 0x1c0, 0x40, true, 0x4276dd1f816aa6d4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_EXTENSION.DvCallbacks", dv_callbacks, 0x200, 0x40, true, 0xf11acba690138c40)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DRIVER_EXTENSION.VerifierContext", verifier_context, 0x240, 0x40, true, 0x907f7acb2f4dc022)
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