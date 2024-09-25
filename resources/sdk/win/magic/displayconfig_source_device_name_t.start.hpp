#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_SOURCE_DEVICE_NAME.header", header, 0x0, 0xa0, true, 0x67f079e00cb3b476)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "DISPLAYCONFIG_SOURCE_DEVICE_NAME.viewGdiDeviceName", view_gdi_device_name, 0xa0, 0x0, true, 0x5d9c855bc15be330)
#else
#define _m00
#define _m01
#endif