#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_VIDEOPARAMETERS.Guid", guid, 0x0, 0x80, true, 0xb73bacb8349d66e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwOffset", dw_offset, 0x80, 0x20, true, 0xb4797c385edeee8d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwCommand", dw_command, 0xa0, 0x20, true, 0x49a0f865675339a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwFlags", dw_flags, 0xc0, 0x20, true, 0xcbe0e729f21e8686)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwMode", dw_mode, 0xe0, 0x20, true, 0xfa1b63ec3ee42b94)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwTVStandard", dw_tv_standard, 0x100, 0x20, true, 0xa16a5954fa06b87e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwAvailableModes", dw_available_modes, 0x120, 0x20, true, 0xff88744ff0381ae7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwAvailableTVStandard", dw_available_tv_standard, 0x140, 0x20, true, 0x41e2846957fa2108)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwFlickerFilter", dw_flicker_filter, 0x160, 0x20, true, 0x3d895aae3af1a051)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwOverScanX", dw_over_scan_x, 0x180, 0x20, true, 0xf62161f1cbb1f637)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwOverScanY", dw_over_scan_y, 0x1a0, 0x20, true, 0xabefe8069da5975b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwMaxUnscaledX", dw_max_unscaled_x, 0x1c0, 0x20, true, 0xe00245b10e229c8e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwMaxUnscaledY", dw_max_unscaled_y, 0x1e0, 0x20, true, 0x68dce0f6d3a40bae)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwPositionX", dw_position_x, 0x200, 0x20, true, 0xb11ec317e965665d)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwPositionY", dw_position_y, 0x220, 0x20, true, 0x8e7479fc8d04692f)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwBrightness", dw_brightness, 0x240, 0x20, true, 0xb1a9ced9f311c944)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwContrast", dw_contrast, 0x260, 0x20, true, 0xde05cc5f1ec9807a)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwCPType", dw_cp_type, 0x280, 0x20, true, 0xde6fac142227af85)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwCPCommand", dw_cp_command, 0x2a0, 0x20, true, 0x9c0f597c0d3a11a8)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwCPStandard", dw_cp_standard, 0x2c0, 0x20, true, 0x3056e6b645051ea3)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.dwCPKey", dw_cp_key, 0x2e0, 0x20, true, 0x88ec6eb4a857c86f)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEOPARAMETERS.bCP_APSTriggerBits", b_cp_aps_trigger_bits, 0x300, 0x20, true, 0xe2fff79fd213af70)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_VIDEOPARAMETERS.bOEMCopyProtection", b_oem_copy_protection, 0x320, 0x0, true, 0x51902e94f4b8428)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif