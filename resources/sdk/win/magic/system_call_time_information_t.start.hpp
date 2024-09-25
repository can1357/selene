#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CALL_TIME_INFORMATION.Length", length, 0x0, 0x20, true, 0x7e46b495e920597c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CALL_TIME_INFORMATION.TotalCalls", total_calls, 0x20, 0x20, true, 0xaa9ffb5c4573e254)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_SYSTEM_CALL_TIME_INFORMATION.TimeOfCalls", time_of_calls, 0x40, 0x40, true, 0x72ceee1dd878154)
#else
#define _m00
#define _m01
#define _m02
#endif