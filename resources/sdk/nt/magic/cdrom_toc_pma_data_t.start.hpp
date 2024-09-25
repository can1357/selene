#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_PMA_DATA.Length", length, 0x0, 0x10, true, 0x3e4d1a5a7e11bb91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cdrom_toc_full_toc_data_block_t>), "_CDROM_TOC_PMA_DATA.Descriptors", descriptors, 0x20, 0x0, true, 0xfd40faf9a4c284c7)
#else
#define _m00
#define _m01
#endif