#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "StackTrace.BackTraceHash", back_trace_hash, 0x180, 0x20, true, 0x346344ee464c8bd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "StackTrace.FrameCount", frame_count, 0x1a0, 0x10, true, 0xb700e5dde7a8ea79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void const*, 1>), "StackTrace.Frames", frames, 0x1c0, 0x40, true, 0xa92e279a3f402c02)
#else
#define _m00
#define _m01
#define _m02
#endif