#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0xb2bc124786260d94)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ACPI_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0x2c0a41f2f049dac3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ACPI_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0xcb7802a37c44fcfa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_ACPI_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x2ce8df4e8c55068b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_ACPI_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x741f4410fee746ad)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pgpe_connect_vector_t ), "_ACPI_INTERFACE_STANDARD.GpeConnectVector", gpe_connect_vector, 0x100, 0x40, true, 0x5f17f99e422ce6a5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_ACPI_INTERFACE_STANDARD.GpeDisconnectVector", gpe_disconnect_vector, 0x140, 0x40, true, 0xd4bcaa803c5916fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, void*)>*), "_ACPI_INTERFACE_STANDARD.GpeEnableEvent", gpe_enable_event, 0x180, 0x40, true, 0xf4c2824c088e23ff)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, void*)>*), "_ACPI_INTERFACE_STANDARD.GpeDisableEvent", gpe_disable_event, 0x1c0, 0x40, true, 0x1688685359ffa08c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, void*)>*), "_ACPI_INTERFACE_STANDARD.GpeClearStatus", gpe_clear_status, 0x200, 0x40, true, 0x8de7e05619adee51)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pregister_for_device_notifications_t ), "_ACPI_INTERFACE_STANDARD.RegisterForDeviceNotifications", register_for_device_notifications, 0x240, 0x40, true, 0xfedda9c7dcbce749)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(punregister_for_device_notifications_t ), "_ACPI_INTERFACE_STANDARD.UnregisterForDeviceNotifications", unregister_for_device_notifications, 0x280, 0x40, true, 0x5e06ed22e8659001)
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