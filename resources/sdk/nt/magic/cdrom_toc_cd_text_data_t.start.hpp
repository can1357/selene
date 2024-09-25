#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_CD_TEXT_DATA.Length", length, 0x0, 0x10, true, 0x1eb60a94e31d9f58)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cdrom_toc_cd_text_data_block_t>), "_CDROM_TOC_CD_TEXT_DATA.Descriptors", descriptors, 0x20, 0x0, true, 0x5d8311d4c2687e08)
#else
#define _m00
#define _m01
#endif