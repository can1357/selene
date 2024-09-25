#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_ADD_DEVICE.Header", header, 0x0, 0x8, true, 0x31814989a965d771)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_ADD_DEVICE.AttachDeviceNameOffset", attach_device_name_offset, 0x20, 0x20, true, 0x7f88d8975dc3979b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_WUDFMESSAGE_ADD_DEVICE.InternalReferenceStringValid", internal_reference_string_valid, 0x40, 0x10, true, 0x6db9dbaf8dfdaca9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_WUDFMESSAGE_ADD_DEVICE.InternalReferenceStringOffset", internal_reference_string_offset, 0x60, 0x40, true, 0xcddaf9efb726c3b4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_ADD_DEVICE.PdoNameOffset", pdo_name_offset, 0xa0, 0x20, true, 0x64ddd136a759e9a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WUDFMESSAGE_ADD_DEVICE.DeviceObjectPointer", device_object_pointer, 0xc0, 0x40, true, 0x4357fa2977362624)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_devnode_context_t*), "_WUDFMESSAGE_ADD_DEVICE.DevnodeContext", devnode_context, 0x100, 0x40, true, 0xe41315184e3ec66b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif