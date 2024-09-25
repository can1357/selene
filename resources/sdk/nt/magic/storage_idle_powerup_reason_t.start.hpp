#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_IDLE_POWERUP_REASON.Version", version, 0x0, 0x20, true, 0x477e3b999e9afb67)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_IDLE_POWERUP_REASON.Size", size, 0x20, 0x20, true, 0xbc26369b97de0cfa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_powerup_reason_type_t), "_STORAGE_IDLE_POWERUP_REASON.PowerupReason", powerup_reason, 0x40, 0x20, true, 0x230d6115cbe13214)
#else
#define _m00
#define _m01
#define _m02
#endif