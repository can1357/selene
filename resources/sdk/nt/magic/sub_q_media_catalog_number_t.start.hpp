#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_header_t), "_SUB_Q_MEDIA_CATALOG_NUMBER.Header", header, 0x0, 0x20, true, 0x991cb99a74147c3c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_MEDIA_CATALOG_NUMBER.FormatCode", format_code, 0x20, 0x8, true, 0xb58b6d86b59f7161)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUB_Q_MEDIA_CATALOG_NUMBER.Mcval", mcval, 0x47, 0x1, true, 0xb5e4061d1032e174, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 15>), "_SUB_Q_MEDIA_CATALOG_NUMBER.MediaCatalog", media_catalog, 0x48, 0x78, true, 0xd65140281ed66ef5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif