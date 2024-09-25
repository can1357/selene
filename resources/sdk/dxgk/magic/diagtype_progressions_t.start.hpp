#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGTYPE_PROGRESSIONS.SyncLockEnableSync", sync_lock_enable_sync, 0x0, 0x1, true, 0x6bd8071159a4fbfc, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGTYPE_PROGRESSIONS.Value", value, 0x0, 0x20, true, 0xa40482b63978a71d)
#else
#define _m00
#define _m01
#endif