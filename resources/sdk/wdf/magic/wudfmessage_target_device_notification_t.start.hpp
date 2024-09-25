#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.Header", header, 0x0, 0x8, true, 0x4ec5e1ca85b04ad2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.Event", event, 0x20, 0x80, true, 0xa8a2c1b5c9c0d55f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_devnode_context_t*), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.DevnodeContext", devnode_context, 0xc0, 0x40, true, 0x43d585505aabaf9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.TargetContext", target_context, 0x100, 0x40, true, 0xe218f081033ed2cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.CustomBufferSize", custom_buffer_size, 0x140, 0x20, true, 0xf5ec7858702914d3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_TARGET_DEVICE_NOTIFICATION.NameBufferOffset", name_buffer_offset, 0x160, 0x20, true, 0x2f79b81050dd733d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif