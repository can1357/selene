#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHW_PROFILE_INFOA.dwDockInfo", dw_dock_info, 0x0, 0x20, true, 0x2543c0f52efc04cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 39>), "tagHW_PROFILE_INFOA.szHwProfileGuid", sz_hw_profile_guid, 0x20, 0x38, true, 0x32c4545e53861104)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 80>), "tagHW_PROFILE_INFOA.szHwProfileName", sz_hw_profile_name, 0x158, 0x80, true, 0xe3e6ebfda19f1882)
#else
#define _m00
#define _m01
#define _m02
#endif