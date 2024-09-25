#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::tag_ref_type_t), "FxTagHistory.RefType", ref_type, 0x0, 0x20, true, 0x4e8a0dea5ff0b61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxTagHistory.RefCount", ref_count, 0x20, 0x20, true, 0x5356fcbff7437b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<char*, const char*>), "FxTagHistory.File", file, 0x40, 0x40, true, 0x7aa82e259031297c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTagHistory.Line", line, 0x80, 0x20, true, 0xefd34e5397814f5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxTagHistory.Tag", tag, 0xc0, 0x40, true, 0x7aecd2f5a859affb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxTagHistory.Time", time, 0x100, 0x40, true, 0x521a5508eb3daad8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::tag_tracking_stack_frames_t*), "FxTagHistory.StackFrames", stack_frames, 0x140, 0x40, true, 0x9c56efb8b2846d28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif