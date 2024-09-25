#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_EXCLUSIVE_LOCK_STATE.LockState", lock_state, 0x0, 0x8, true, 0xc2d74e874137f6d4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_CDROM_EXCLUSIVE_LOCK_STATE.CallerName", caller_name, 0x8, 0x0, true, 0x3c1f1830f43272b8)
#else
#define _m00
#define _m01
#endif