#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_REPORT_INFORMATION.dwSize", dw_size, 0x0, 0x20, true, 0xb728873af2663c79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WER_REPORT_INFORMATION.hProcess", h_process, 0x40, 0x40, true, 0x93e292ff1a9678bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "_WER_REPORT_INFORMATION.wzConsentKey", wz_consent_key, 0x80, 0x0, true, 0xbedce8cb193b51bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_WER_REPORT_INFORMATION.wzFriendlyEventName", wz_friendly_event_name, 0x480, 0x0, true, 0xfe80e3cc90f9834a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_WER_REPORT_INFORMATION.wzApplicationName", wz_application_name, 0xc80, 0x0, true, 0xbdbd8ee31bd0e9f0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_WER_REPORT_INFORMATION.wzApplicationPath", wz_application_path, 0x1480, 0x40, true, 0x479e7cb230fb78c1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 512>), "_WER_REPORT_INFORMATION.wzDescription", wz_description, 0x24c0, 0x0, true, 0x9ced7f0365d8017)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_WER_REPORT_INFORMATION.hwndParent", hwnd_parent, 0x44c0, 0x40, true, 0x4ae915bd5d2a679a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif