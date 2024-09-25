#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cdrom_exclusive_access_t), "_CDROM_EXCLUSIVE_LOCK.Access", access, 0x0, 0x40, true, 0x26bee2bfb4aa00a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_CDROM_EXCLUSIVE_LOCK.CallerName", caller_name, 0x40, 0x0, true, 0xfb24f4043528c75c)
#else
#define _m00
#define _m01
#endif