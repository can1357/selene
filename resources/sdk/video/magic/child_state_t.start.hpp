#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_STATE.Id", id, 0x0, 0x20, true, 0xc47cf5c69f51106a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_STATE.State", state, 0x20, 0x20, true, 0x8de2aadfcc5ee99a)
#else
#define _m00
#define _m01
#endif