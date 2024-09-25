#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_BLOCKED_DRIVER_DATA.Flags", flags, 0x0, 0x20, true, 0x59c77f1962ff87b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_BLOCKED_DRIVER_DATA.BufferLength", buffer_length, 0x20, 0x20, true, 0x4b1d56099c36074b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_CONTROL_BLOCKED_DRIVER_DATA.Buffer", buffer, 0x40, 0x40, true, 0xb7e08c3c1fd19385)
#else
#define _m00
#define _m01
#define _m02
#endif