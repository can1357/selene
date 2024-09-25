#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_PORT_MESSAGE_ZONE_INFORMATION.Buffer", buffer, 0x0, 0x40, true, 0x601d5d7ff22d17ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_PORT_MESSAGE_ZONE_INFORMATION.Size", size, 0x40, 0x20, true, 0xf6d75ccbd4f1c10e)
#else
#define _m00
#define _m01
#endif