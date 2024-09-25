#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RUN_ONCE.Ptr", ptr, 0x0, 0x40, true, 0x7b22496dc2370906)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_RUN_ONCE.Value", value, 0x0, 0x40, true, 0x5ad205aaf6986c89)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_RUN_ONCE.State", state, 0x0, 0x2, true, 0xc49f2310e182da56, 2, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#endif