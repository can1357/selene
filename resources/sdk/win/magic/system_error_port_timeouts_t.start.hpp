#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ERROR_PORT_TIMEOUTS.StartTimeout", start_timeout, 0x0, 0x20, true, 0xbfd45f65e38f0bbb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ERROR_PORT_TIMEOUTS.CommTimeout", comm_timeout, 0x20, 0x20, true, 0x1eae6a28abe05e2d)
#else
#define _m00
#define _m01
#endif