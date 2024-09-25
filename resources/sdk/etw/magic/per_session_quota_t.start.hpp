#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PER_SESSION_QUOTA.SessionId", session_id, 0x0, 0x20, true, 0x3f61e50508cafc95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PER_SESSION_QUOTA.CpuShareWeight", cpu_share_weight, 0x20, 0x20, true, 0x441b41200c3d2514)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_PER_SESSION_QUOTA.CapturedWeightData", captured_weight_data, 0x40, 0x40, true, 0xb36b51ad2791d3c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_PER_SESSION_QUOTA.CyclesAccumulated", cycles_accumulated, 0x80, 0x40, true, 0x49c5db6663de0b6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif