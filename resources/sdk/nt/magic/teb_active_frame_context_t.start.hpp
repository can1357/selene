#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TEB_ACTIVE_FRAME_CONTEXT.Flags", flags, 0x0, 0x20, true, 0x45236c57b446164)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<char*, const char*>), "_TEB_ACTIVE_FRAME_CONTEXT.FrameName", frame_name, 0x40, 0x40, true, 0x41c3ab0512b0b270)
#else
#define _m00
#define _m01
#endif