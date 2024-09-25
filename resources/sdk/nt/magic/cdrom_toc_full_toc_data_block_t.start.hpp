#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.SessionNumber", session_number, 0x0, 0x8, true, 0xa02fccddc8970f78)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.Control", control, 0x8, 0x4, true, 0x7108e6da9d0d73eb, 4, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.Adr", adr, 0xc, 0x4, true, 0x4b0917a7a0075df, 4, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.Point", point, 0x18, 0x8, true, 0xc993a3190ad34efa)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.MsfExtra", msf_extra, 0x20, 0x18, true, 0x7f847129b0f3c7fa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.Zero", zero, 0x38, 0x8, true, 0x2367e611a2c78427)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDROM_TOC_FULL_TOC_DATA_BLOCK.Msf", msf, 0x40, 0x18, true, 0x72de8142366440b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif