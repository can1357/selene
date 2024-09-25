#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMTIMEOUTS.ReadIntervalTimeout", read_interval_timeout, 0x0, 0x20, true, 0x9a6c7a41a734bb21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMTIMEOUTS.ReadTotalTimeoutMultiplier", read_total_timeout_multiplier, 0x20, 0x20, true, 0x375c53f1429ff4f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMTIMEOUTS.ReadTotalTimeoutConstant", read_total_timeout_constant, 0x40, 0x20, true, 0xb1acb4e4e97e7167)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMTIMEOUTS.WriteTotalTimeoutMultiplier", write_total_timeout_multiplier, 0x60, 0x20, true, 0xbe8b05ee499f6cac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMTIMEOUTS.WriteTotalTimeoutConstant", write_total_timeout_constant, 0x80, 0x20, true, 0x1ff2ca62988cc72c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif