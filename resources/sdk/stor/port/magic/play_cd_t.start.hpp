#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_CD.OperationCode", operation_code, 0x0, 0x8, true, 0x86764108d0ea9e86)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.CMSF", cmsf, 0x9, 0x1, true, 0xb3e53f01080228f6, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PLAY_CD.ExpectedSectorType", expected_sector_type, 0xa, 0x3, true, 0x93d4d42e4955936d, 3, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PLAY_CD.Lun", lun, 0xd, 0x3, true, 0x3a4dfb0c7bd49619, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::lba_t), "_PLAY_CD.LBA", lba, 0x10, 0x40, true, 0x6e098e6a5193b4e2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::msf_t), "_PLAY_CD.MSF", msf, 0x10, 0x40, true, 0x474bfe2e4ee21e33)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.Audio", audio, 0x50, 0x1, true, 0x1a5a6adcad34f04, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.Composite", composite, 0x51, 0x1, true, 0x931a1201c006489b, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.Port1", port1, 0x52, 0x1, true, 0xd410e41907cc86cd, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.Port2", port2, 0x53, 0x1, true, 0x319f96350bf0ef45, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PLAY_CD.Speed", speed, 0x57, 0x1, true, 0xb56b03e036454a72, 1, uint8_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_CD.Control", control, 0x58, 0x8, true, 0xe036c78b45048600)
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
#define _m10
#define _m11
#endif