#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_SLOT_INFO_V2.SlotNumber", slot_number, 0x0, 0x8, true, 0x3ab2e46f3636771d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_SLOT_INFO_V2.ReadOnly", read_only, 0x8, 0x8, true, 0x669724c324390d83)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_FIRMWARE_SLOT_INFO_V2.Revision", revision, 0x40, 0x80, true, 0x2b19f14b3756ec4e)
#else
#define _m00
#define _m01
#define _m02
#endif