#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_STANDARD_INFORMATION.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0xfc781e40f9b4f18f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_STANDARD_INFORMATION.ulStatusFlags", ul_status_flags, 0x80, 0x20, true, 0xf5cac56dccc00173)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_STANDARD_INFORMATION.ulInformation", ul_information, 0xa0, 0x20, true, 0x6954f5a15f6d8be0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_STANDARD_INFORMATION.ulReserved", ul_reserved, 0xc0, 0x20, true, 0xaf0b019470753fa4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_STANDARD_INFORMATION.ulReserved2", ul_reserved2, 0xe0, 0x20, true, 0xc33d20fa0dff7767)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif