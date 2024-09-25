#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_HIDCLASS_DRIVER_EXTENSION.MinidriverObject", minidriver_object, 0x0, 0x40, true, 0x6888760de199450d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_HIDCLASS_DRIVER_EXTENSION.RegistryPath", registry_path, 0x40, 0x80, true, 0xd21556461042df9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDCLASS_DRIVER_EXTENSION.DeviceExtensionSize", device_extension_size, 0xc0, 0x20, true, 0x19b8de54161efc08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*, 28>), "_HIDCLASS_DRIVER_EXTENSION.MajorFunction", major_function, 0x100, 0x0, true, 0xccec464e33a57390)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*), "_HIDCLASS_DRIVER_EXTENSION.AddDevice", add_device, 0x800, 0x40, true, 0xc7c0d7b72218e3eb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_HIDCLASS_DRIVER_EXTENSION.DriverUnload", driver_unload, 0x840, 0x40, true, 0x73acfae539ccc062)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HIDCLASS_DRIVER_EXTENSION.ReferenceCount", reference_count, 0x880, 0x20, true, 0x39a0389a216399d8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HIDCLASS_DRIVER_EXTENSION.ListEntry", list_entry, 0x8c0, 0x80, true, 0x8950f1d1f20e7bfa)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDCLASS_DRIVER_EXTENSION.DevicesArePolled", devices_are_polled, 0x940, 0x8, true, 0xbdd385713313cc38)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HIDCLASS_DRIVER_EXTENSION.FastResumeDisabled", fast_resume_disabled, 0x948, 0x8, true, 0x4fb065ccf5be53fa)
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
#endif