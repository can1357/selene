#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS.RestoreComplete", restore_complete, 0x0, 0x1, true, 0xc70d752d93d0cd16, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS.Value", value, 0x0, 0x20, true, 0x5e22669a048153f9)
#else
#define _m00
#define _m01
#endif