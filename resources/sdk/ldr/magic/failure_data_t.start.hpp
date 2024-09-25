#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_LDR_FAILURE_DATA.Status", status, 0x0, 0x20, true, 0xde36c0ec7d197541)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_LDR_FAILURE_DATA.AdditionalInfo", additional_info, 0x220, 0x0, true, 0xc3284e03f04682c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_LDR_FAILURE_DATA.ImageName", image_name, 0x20, 0x0, true, 0x18c03fbc2482a8df)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_LDR_FAILURE_DATA.DllName", dll_name, 0x20, 0x0, true, 0xbd697de7788fbf0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif