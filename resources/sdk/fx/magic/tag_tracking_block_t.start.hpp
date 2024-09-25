#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::tag_tracking_block_t*), "FxTagTrackingBlock.Next", next, 0x0, 0x40, true, 0x6fe1a085b64a0929)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxTagTrackingBlock.Tag", tag, 0x40, 0x40, true, 0xab55be7a309f7637)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<char*, const char*>), "FxTagTrackingBlock.File", file, 0x80, 0x40, true, 0x9387f1bfb0dccbd5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTagTrackingBlock.Line", line, 0xc0, 0x20, true, 0xd1a6a0a54f3eedf5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxTagTrackingBlock.TimeLocked", time_locked, 0x100, 0x40, true, 0x500e31866ed2b721)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::tag_tracking_stack_frames_t*), "FxTagTrackingBlock.StackFrames", stack_frames, 0x140, 0x40, true, 0x6c2e2b3021eea39c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif