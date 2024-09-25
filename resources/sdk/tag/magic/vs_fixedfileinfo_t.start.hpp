#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwSignature", dw_signature, 0x0, 0x20, true, 0xd256900bf27f40cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwStrucVersion", dw_struc_version, 0x20, 0x20, true, 0x1b3cf4477aed1d6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileVersionMS", dw_file_version_ms, 0x40, 0x20, true, 0x14c3b7134d83701a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileVersionLS", dw_file_version_ls, 0x60, 0x20, true, 0x70e8a7ca6282d1fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwProductVersionMS", dw_product_version_ms, 0x80, 0x20, true, 0x16c7383900d37ad3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwProductVersionLS", dw_product_version_ls, 0xa0, 0x20, true, 0x6464f960d1770fa5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileFlagsMask", dw_file_flags_mask, 0xc0, 0x20, true, 0x8059e51143c024d3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileFlags", dw_file_flags, 0xe0, 0x20, true, 0xff821f19d2cb0ce9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileOS", dw_file_os, 0x100, 0x20, true, 0x8cc0fb1b95b9d302)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileType", dw_file_type, 0x120, 0x20, true, 0xbc53fe61c2edbf63)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileSubtype", dw_file_subtype, 0x140, 0x20, true, 0x203d1b0581fda228)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileDateMS", dw_file_date_ms, 0x160, 0x20, true, 0xfcecde2f6158b941)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVS_FIXEDFILEINFO.dwFileDateLS", dw_file_date_ls, 0x180, 0x20, true, 0x5744f6e0d62ee574)
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
#endif