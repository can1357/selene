#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION.header", header, 0x0, 0xa0, true, 0x99acebf91c4a26b4)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION.disableMonitorVirtualResolution", disable_monitor_virtual_resolution, 0xa0, 0x1, true, 0x4c9a912d6c855fd8, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_SUPPORT_VIRTUAL_RESOLUTION.value", value, 0xa0, 0x20, true, 0xec669285d82d318a)
#else
#define _m00
#define _m01
#define _m02
#endif