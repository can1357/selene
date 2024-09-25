#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLESTATE_EVENT.NewState", new_state, 0x0, 0x20, true, 0x2129d57e946065c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PPM_IDLESTATE_EVENT.OldState", old_state, 0x20, 0x20, true, 0xc3802f0fbb05f352)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PPM_IDLESTATE_EVENT.Processors", processors, 0x40, 0x40, true, 0xc407760db92d4590)
#else
#define _m00
#define _m01
#define _m02
#endif