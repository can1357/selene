#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILETIME.dwLowDateTime", dw_low_date_time, 0x0, 0x20, true, 0xe62db4ba3f3ddf92)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILETIME.dwHighDateTime", dw_high_date_time, 0x20, 0x20, true, 0x9307d47e19d9892f)
#else
#define _m00
#define _m01
#endif