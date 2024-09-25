#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_header_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.Header", header, 0x0, 0xa0, true, 0x3d6533620898fad5)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.SyncLockEnableSync.DuringSetTiming", during_set_timing, 0x0, 0x1, true, 0xeef672e5c8633a12, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.SyncLockEnableSync.EnableSyncStart", enable_sync_start, 0x1, 0x1, true, 0x7c9d8e3dc5426936, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.SyncLockEnableSync.EnableSyncEnd", enable_sync_end, 0x2, 0x1, true, 0x7d33977ec787086c, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_sync_lock_enable_sync_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.SyncLockEnableSync", sync_lock_enable_sync, 0xa0, 0x20, true, 0xbdaad03be86c34bc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.Value", value, 0xa0, 0x20, true, 0xce6257086bc4c917)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif