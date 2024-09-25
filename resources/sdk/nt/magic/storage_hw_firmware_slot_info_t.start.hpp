#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_SLOT_INFO.Version", version, 0x0, 0x20, true, 0xa65debe1d5170ae9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_SLOT_INFO.Size", size, 0x20, 0x20, true, 0x8d1f3736a9d3ed1b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_SLOT_INFO.SlotNumber", slot_number, 0x40, 0x8, true, 0xb3d62033b49a656a)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_HW_FIRMWARE_SLOT_INFO.ReadOnly", read_only, 0x48, 0x1, true, 0xdceb052188d5654b, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_HW_FIRMWARE_SLOT_INFO.Revision", revision, 0x80, 0x80, true, 0x1ad6fb3d5df496b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif