#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 50>), "_WNF_CMPT_BLOCKED_APP_CONTEXT.AppName", app_name, 0x0, 0x0, false, 0x813ef02e2d8ba012)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 50>), "_WNF_CMPT_BLOCKED_APP_CONTEXT.VendorName", vendor_name, 0x0, 0x0, false, 0x133e705eb7ef62e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_CMPT_BLOCKED_APP_CONTEXT.dwBlock", dw_block, 0x0, 0x0, false, 0x5597758dcddf3a67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_CMPT_BLOCKED_APP_CONTEXT.dwFwLinkNumber", dw_fw_link_number, 0x0, 0x0, false, 0xdfe020144500bf3e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_CMPT_BLOCKED_APP_CONTEXT.dwKbNumber", dw_kb_number, 0x0, 0x0, false, 0xdab64d290eb2d6d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WNF_CMPT_BLOCKED_APP_CONTEXT.PackageFullName", package_full_name, 0x0, 0x0, false, 0xe15171a59d05f7f3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif