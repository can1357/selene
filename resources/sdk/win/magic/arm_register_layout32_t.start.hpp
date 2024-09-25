#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "ArmRegisterLayout32.NCRN", ncrn, 0x40, 0x8, true, 0xe3c907a2106145c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ArmRegisterLayout32.NSAA", nsaa, 0x60, 0x20, true, 0x3d35651923a4841a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 16>), "ArmRegisterLayout32.FloatRegUsed", float_reg_used, 0x80, 0x0, true, 0xaa27ccd5e611acb4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout32.RegOnStack", reg_on_stack, 0x280, 0x20, true, 0x8a9009c4d449fbbd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout32.FloatOnStack", float_on_stack, 0x2a0, 0x20, true, 0xd3219c5f8496abbb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ArmRegisterLayout32.Entries", entries, 0x2c0, 0x10, true, 0xbb10900fd3e210cf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ArmRegisterLayout32.CurrentOffset", current_offset, 0x2e0, 0x20, true, 0x81ff287323814782)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout32.RunCount", run_count, 0x300, 0x20, true, 0x1c17a2d81c9fa8a5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout32.InRun", in_run, 0x320, 0x20, true, 0xf9bf8aed262a97f9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ArmRegisterLayout32.TotalSlots", total_slots, 0x340, 0x20, true, 0x29b49ecd33f5f14a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif