#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "StackTraceData.BackTraceHash", back_trace_hash, 0x0, 0x20, true, 0x4e18d9bf017456d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "StackTraceData.FrameCount", frame_count, 0x20, 0x10, true, 0x9ad6c342d3bc113a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void const*, 1>), "StackTraceData.Frames", frames, 0x40, 0x40, true, 0x64fea93ca8f004a9)
#else
#define _m00
#define _m01
#define _m02
#endif