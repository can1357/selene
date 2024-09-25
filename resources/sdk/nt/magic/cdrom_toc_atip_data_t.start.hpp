#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_ATIP_DATA.Length", length, 0x0, 0x10, true, 0x1faadfd23f3d5588)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cdrom_toc_atip_data_block_t>), "_CDROM_TOC_ATIP_DATA.Descriptors", descriptors, 0x20, 0x0, true, 0x67eee14899237fed)
#else
#define _m00
#define _m01
#endif