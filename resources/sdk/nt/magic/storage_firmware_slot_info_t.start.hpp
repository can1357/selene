#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_SLOT_INFO.SlotNumber", slot_number, 0x0, 0x8, true, 0x5e5b983de54312a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_SLOT_INFO.ReadOnly", read_only, 0x8, 0x8, true, 0x7c54a949e98f2d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_STORAGE_FIRMWARE_SLOT_INFO.Revision.Info", info, 0x0, 0x40, true, 0xf75055b1e6a4e844)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_FIRMWARE_SLOT_INFO.Revision.AsUlonglong", as_ulonglong, 0x0, 0x40, true, 0xdba14dc9c730e476)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_revision_t), "_STORAGE_FIRMWARE_SLOT_INFO.Revision", revision, 0x40, 0x40, true, 0xa4cf4afb879692cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif