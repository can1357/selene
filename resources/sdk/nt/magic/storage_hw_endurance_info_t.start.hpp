#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_ENDURANCE_INFO.ValidFields", valid_fields, 0x0, 0x20, true, 0x42b8da88f5501900)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_ENDURANCE_INFO.GroupId", group_id, 0x20, 0x20, true, 0xf109a6aad710bdb9)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_HW_ENDURANCE_INFO.Flags.Shared", shared, 0x0, 0x1, true, 0xb6b65ab173754de3, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_STORAGE_HW_ENDURANCE_INFO.Flags", flags, 0x40, 0x20, true, 0x5024e68205d2f131)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_ENDURANCE_INFO.LifePercentage", life_percentage, 0x60, 0x20, true, 0xca80bcc02f7210d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_HW_ENDURANCE_INFO.BytesReadCount", bytes_read_count, 0x80, 0x80, true, 0x6f1732664433ce6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_STORAGE_HW_ENDURANCE_INFO.ByteWriteCount", byte_write_count, 0x100, 0x80, true, 0xd2b787a2d66910d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif