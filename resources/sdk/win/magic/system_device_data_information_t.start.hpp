#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_DEVICE_DATA_INFORMATION.DeviceId", device_id, 0x0, 0x80, true, 0xf622f94e02c06aae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_DEVICE_DATA_INFORMATION.DataName", data_name, 0x80, 0x80, true, 0xcb3b73f83159eed0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_DATA_INFORMATION.DataType", data_type, 0x100, 0x20, true, 0x6edba2f959c73ae2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_DEVICE_DATA_INFORMATION.DataBufferLength", data_buffer_length, 0x120, 0x20, true, 0x481e8bc6aeee2f93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_DEVICE_DATA_INFORMATION.DataBuffer", data_buffer, 0x140, 0x40, true, 0xa2a64792488e2b3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif