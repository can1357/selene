#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL.Header", header, 0x0, 0x8, true, 0x9c6a103383ccfcc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL.InterfaceGuid", interface_guid, 0x20, 0x80, true, 0x2ca1d52de23477bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_devnode_context_t*), "_WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL.DevnodeContext", devnode_context, 0xc0, 0x40, true, 0xf87528907c0b8940)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_device_context_t*), "_WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL.DeviceContext", device_context, 0x100, 0x40, true, 0x41428b664b4d616)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif