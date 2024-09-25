#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ACPI_INTERFACE_STANDARD2.Size", size, 0x0, 0x10, true, 0x855966ff3502d0a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ACPI_INTERFACE_STANDARD2.Version", version, 0x10, 0x10, true, 0xd685f41a6cd68877)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ACPI_INTERFACE_STANDARD2.Context", context, 0x40, 0x40, true, 0xbaed9e4ab3d653bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "ACPI_INTERFACE_STANDARD2.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x971682692280c467)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "ACPI_INTERFACE_STANDARD2.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x18d7da8bba26aa87)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, enum nt::kinterrupt_mode_t, uint8_t, sdk::function<uint8_t(void*, void*)>*, void*, void**)>*), "ACPI_INTERFACE_STANDARD2.GpeConnectVector", gpe_connect_vector, 0x100, 0x40, true, 0x3f60199241ca621c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "ACPI_INTERFACE_STANDARD2.GpeDisconnectVector", gpe_disconnect_vector, 0x140, 0x40, true, 0x235d65a3978b89bc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "ACPI_INTERFACE_STANDARD2.GpeEnableEvent", gpe_enable_event, 0x180, 0x40, true, 0xcc30d7b3ac61213f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "ACPI_INTERFACE_STANDARD2.GpeDisableEvent", gpe_disable_event, 0x1c0, 0x40, true, 0xa276d6acacaf6aca)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "ACPI_INTERFACE_STANDARD2.GpeClearStatus", gpe_clear_status, 0x200, 0x40, true, 0x6b7c2715bed058e8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, sdk::function<void(void*, uint32_t)>*, void*)>*), "ACPI_INTERFACE_STANDARD2.RegisterForDeviceNotifications", register_for_device_notifications, 0x240, 0x40, true, 0xe16ec215da5dd007)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "ACPI_INTERFACE_STANDARD2.UnregisterForDeviceNotifications", unregister_for_device_notifications, 0x280, 0x40, true, 0x872aae386d405fca)
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
#endif