#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_ADAPTER_NAME.header", header, 0x0, 0xa0, true, 0x210991ba95f19f0e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "DISPLAYCONFIG_ADAPTER_NAME.adapterDevicePath", adapter_device_path, 0xa0, 0x0, true, 0x2faf5bfc598c6667)
#else
#define _m00
#define _m01
#endif