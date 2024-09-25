#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MINIDUMP.Size", size, 0x0, 0x20, true, 0xf06c9ef032ddf421)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MINIDUMP.Version", version, 0x20, 0x20, true, 0x62e14885139b20a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MINIDUMP.ModuleCount", module_count, 0x40, 0x20, true, 0x93c19ddc198fbd2f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_MINIDUMP.FrameCount", frame_count, 0x60, 0x20, true, 0x9701de042b09a861)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct sk::crash_module_t, 16>), "_SK_CRASH_MINIDUMP.Modules", modules, 0x80, 0x0, true, 0xe73e933802de1572)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct sk::crash_stack_frame_t, 366>), "_SK_CRASH_MINIDUMP.StackFrames", stack_frames, 0x2480, 0x80, true, 0xea19d4449f2d9d62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif