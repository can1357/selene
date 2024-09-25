#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MULTI_TIME.Qpc", qpc, 0x0, 0x40, true, 0x1ff6e33a415c91ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MULTI_TIME.HostQpc", host_qpc, 0x40, 0x40, true, 0x4442a850d0ef5af4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MULTI_TIME.SystemTime", system_time, 0x80, 0x40, true, 0x60440c2b5f5dd72a)
#else
#define _m00
#define _m01
#define _m02
#endif