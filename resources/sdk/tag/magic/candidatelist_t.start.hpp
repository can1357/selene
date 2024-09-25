#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwSize", dw_size, 0x0, 0x20, true, 0x3292a32fe4d05a80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwStyle", dw_style, 0x20, 0x20, true, 0xcc0d6cfaea65ea2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwCount", dw_count, 0x40, 0x20, true, 0x54b590debe8c69dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwSelection", dw_selection, 0x60, 0x20, true, 0x71a270088f624b8d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwPageStart", dw_page_start, 0x80, 0x20, true, 0x4bc2ccd76266f20f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCANDIDATELIST.dwPageSize", dw_page_size, 0xa0, 0x20, true, 0xccae515329592ac4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "tagCANDIDATELIST.dwOffset", dw_offset, 0xc0, 0x20, true, 0xd73cc9c157df38a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif