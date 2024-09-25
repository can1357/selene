#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHW_PROFILE_INFOW.dwDockInfo", dw_dock_info, 0x0, 0x20, true, 0xd5271504078ebfa6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 39>), "tagHW_PROFILE_INFOW.szHwProfileGuid", sz_hw_profile_guid, 0x20, 0x70, true, 0x68cbc9ecf914cae5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 80>), "tagHW_PROFILE_INFOW.szHwProfileName", sz_hw_profile_name, 0x290, 0x0, true, 0x3dae6f26eccf4745)
#else
#define _m00
#define _m01
#define _m02
#endif