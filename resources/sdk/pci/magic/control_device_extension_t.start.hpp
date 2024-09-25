#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_DEVICE_EXTENSION.Signature", signature, 0x0, 0x20, true, 0xd0c0dfcb9244cac9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CONTROL_DEVICE_EXTENSION.ProxyDeviceLock", proxy_device_lock, 0x40, 0xc0, true, 0xdb3cfacb0a4cbf33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONTROL_DEVICE_EXTENSION.ByteSize", byte_size, 0x100, 0x20, true, 0x6cda3d93a6fbd2bd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CONTROL_DEVICE_EXTENSION.MultiSzProxyDevicePath", multi_sz_proxy_device_path, 0x140, 0x40, true, 0xc9bc6fa54035a573)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif