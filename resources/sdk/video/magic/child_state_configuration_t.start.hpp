#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_STATE_CONFIGURATION.Count", count, 0x0, 0x20, true, 0xf90bdc6fe000d887)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct video::child_state_t, 1>), "_VIDEO_CHILD_STATE_CONFIGURATION.ChildStateArray", child_state_array, 0x20, 0x40, true, 0xfeccbc72ea0ab7a1)
#else
#define _m00
#define _m01
#endif