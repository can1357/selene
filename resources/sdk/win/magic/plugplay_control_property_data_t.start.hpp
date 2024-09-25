#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_PROPERTY_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x9fe395dad8d5f2ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_PROPERTY_DATA.PropertyType", property_type, 0x80, 0x20, true, 0x47431f5a2a40d1d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_CONTROL_PROPERTY_DATA.Buffer", buffer, 0xc0, 0x40, true, 0x5f747753637d18b1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_PROPERTY_DATA.BufferSize", buffer_size, 0x100, 0x20, true, 0xf8a7f86193f6b0b5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif