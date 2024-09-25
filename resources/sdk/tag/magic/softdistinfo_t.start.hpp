#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.cbSize", cb_size, 0x0, 0x20, true, 0xae991d10fb278446)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwFlags", dw_flags, 0x20, 0x20, true, 0xedb3e0a57d1f1699)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwAdState", dw_ad_state, 0x40, 0x20, true, 0xd7ea32fb73d354c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagSOFTDISTINFO.szTitle", sz_title, 0x80, 0x40, true, 0x71e7fac9c4c1bfb1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagSOFTDISTINFO.szAbstract", sz_abstract, 0xc0, 0x40, true, 0x14703b088ccbc2b7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_tagSOFTDISTINFO.szHREF", sz_href, 0x100, 0x40, true, 0xf638fca469f60285)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwInstalledVersionMS", dw_installed_version_ms, 0x140, 0x20, true, 0x95d9d07686d6b834)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwInstalledVersionLS", dw_installed_version_ls, 0x160, 0x20, true, 0xae02280c5c47e4a2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwUpdateVersionMS", dw_update_version_ms, 0x180, 0x20, true, 0xaf3c064805237869)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwUpdateVersionLS", dw_update_version_ls, 0x1a0, 0x20, true, 0x26b7b82320096b8f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwAdvertisedVersionMS", dw_advertised_version_ms, 0x1c0, 0x20, true, 0x721b52ff548550b4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwAdvertisedVersionLS", dw_advertised_version_ls, 0x1e0, 0x20, true, 0x3b246219d8dc3a4e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagSOFTDISTINFO.dwReserved", dw_reserved, 0x200, 0x20, true, 0x65785d65289abd87)
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