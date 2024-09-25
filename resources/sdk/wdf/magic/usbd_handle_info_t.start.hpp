#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::sig_t), "_USBD_HANDLE_INFO.Sig", sig, 0x0, 0x20, true, 0xce2d983f91769568)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct wdf::usbd_interface_v1_t, struct wdf::usbd_interface_v3_t>), "_USBD_HANDLE_INFO.Interface", interface, 0x40, 0x40, true, 0xebaa3280dbcf463c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_USBD_HANDLE_INFO.TargetDeviceObject", target_device_object, 0x680, 0x40, true, 0xac8a9ef6522949ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_HANDLE_INFO.CoreStackUsbdInterfaceVersion", core_stack_usbd_interface_version, 0x6c0, 0x20, true, 0x3909440fe3862fc6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_USBD_HANDLE_INFO.ReferenceCount", reference_count, 0x6e0, 0x20, true, 0xaa638155eec65d99)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_HANDLE_INFO.IsCoreStackUsbdInterfaceVersion600AndDeviceHighSpeed", is_core_stack_usbd_interface_version600_and_device_high_speed, 0x700, 0x8, true, 0x6eb0c440a0001a38)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USBD_HANDLE_INFO.PendingDelete", pending_delete, 0x708, 0x8, true, 0x801cdb961afc69a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif