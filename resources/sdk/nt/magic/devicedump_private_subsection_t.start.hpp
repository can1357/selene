#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_PRIVATE_SUBSECTION.dwFlags", dw_flags, 0x0, 0x20, true, 0x2e8364da0cefb848)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gp_log_page_descriptor_t), "_DEVICEDUMP_PRIVATE_SUBSECTION.GPLogId", gp_log_id, 0x20, 0x20, true, 0xf39f2fc265768d2d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DEVICEDUMP_PRIVATE_SUBSECTION.bData", b_data, 0x40, 0x8, true, 0xe45bfdc2748b54c3)
#else
#define _m00
#define _m01
#define _m02
#endif