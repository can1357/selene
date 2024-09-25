#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDVD_TITLE_KEY_HEADER.DataLength", data_length, 0x0, 0x10, true, 0x2b2bfa4fea1c63d9)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CDVD_TITLE_KEY_HEADER.CGMS", cgms, 0x1b, 0x2, true, 0xee68b979992503da, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_TITLE_KEY_HEADER.CP_SEC", cp_sec, 0x1d, 0x1, true, 0xe7ad2979caaa3c57, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_TITLE_KEY_HEADER.CPM", cpm, 0x1e, 0x1, true, 0x9ceb505d6c1af98d, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDVD_TITLE_KEY_HEADER.Zero", zero, 0x1f, 0x1, true, 0x880beab2e35d5c3f, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cdvd_key_data_t), "_CDVD_TITLE_KEY_HEADER.TitleKey", title_key, 0x20, 0x40, true, 0xc494d39600b86498)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif