#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_PUBLIC_SUBSECTION.dwFlags", dw_flags, 0x0, 0x20, true, 0x6edba3795adc11e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::gp_log_page_descriptor_t, 16>), "_DEVICEDUMP_PUBLIC_SUBSECTION.GPLogTable", gp_log_table, 0x20, 0x0, true, 0xdd94f443eff7e4fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 16>), "_DEVICEDUMP_PUBLIC_SUBSECTION.szDescription", sz_description, 0x220, 0x80, true, 0x155a5557a4e4b6ac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DEVICEDUMP_PUBLIC_SUBSECTION.bData", b_data, 0x2a0, 0x8, true, 0xe02c8d1b43b6b680)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif