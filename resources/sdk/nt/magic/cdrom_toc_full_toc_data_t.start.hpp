#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_TOC_FULL_TOC_DATA.Length", length, 0x0, 0x10, true, 0x45ab66c0c052bfc5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_FULL_TOC_DATA.FirstCompleteSession", first_complete_session, 0x10, 0x8, true, 0xaf72d90eaafe0f27)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDROM_TOC_FULL_TOC_DATA.LastCompleteSession", last_complete_session, 0x18, 0x8, true, 0x295973b017b2526f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cdrom_toc_full_toc_data_block_t>), "_CDROM_TOC_FULL_TOC_DATA.Descriptors", descriptors, 0x20, 0x0, true, 0x11d8c5388f7fdca7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif