#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.PackType", pack_type, 0x0, 0x8, true, 0x6bfd653f9dc7ca72)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.TrackNumber", track_number, 0x8, 0x7, true, 0xf999316532356f52, 7, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.ExtensionFlag", extension_flag, 0xf, 0x1, true, 0x98f9471b5c42884c, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.SequenceNumber", sequence_number, 0x10, 0x8, true, 0x7ee1bb22d1c982ed)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.CharacterPosition", character_position, 0x18, 0x4, true, 0xc8f7e2a388668918, 4, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.BlockNumber", block_number, 0x1c, 0x3, true, 0xac5596b97d51dca0, 3, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.Unicode", unicode, 0x1f, 0x1, true, 0x79de42e21adc344c, 1, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.Text", text, 0x20, 0x60, true, 0xc5c83ab01bdd1d5b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 6>), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.WText", w_text, 0x20, 0x60, true, 0x5a0795a042c248a2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_CD_TEXT_DATA_BLOCK.CRC", crc, 0x80, 0x10, true, 0xe7c0c5b7e3711f98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif