#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "DISPLAYCONFIG_PATH_TARGET_INFO.adapterId", adapter_id, 0x0, 0x40, true, 0xbe64cfc5205394b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.id", id, 0x40, 0x20, true, 0x775336a20af1c2a5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.modeInfoIdx", mode_info_idx, 0x60, 0x20, true, 0xf13979f999597267)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_PATH_TARGET_INFO.desktopModeInfoIdx", desktop_mode_info_idx, 0x60, 0x10, true, 0x1decc6ef7c32eed4, 16, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_PATH_TARGET_INFO.targetModeInfoIdx", target_mode_info_idx, 0x70, 0x10, true, 0x1b1d3d1e5a7196ca, 16, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.outputTechnology", output_technology, 0x80, 0x20, true, 0x7b5c1a210b56332b, 32, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.rotation", rotation, 0xa0, 0x20, true, 0x71bd435d6c3b893f, 32, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.scaling", scaling, 0xc0, 0x20, true, 0xd328920f3e3f4d07, 32, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_rational_t), "DISPLAYCONFIG_PATH_TARGET_INFO.refreshRate", refresh_rate, 0xe0, 0x40, true, 0x9d7909abfbd20841)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.scanLineOrdering", scan_line_ordering, 0x120, 0x20, true, 0xebd970d42e3779d8, 32, uint32_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.targetAvailable", target_available, 0x140, 0x20, true, 0x7ef2e09ee6f3bbfe)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_TARGET_INFO.statusFlags", status_flags, 0x160, 0x20, true, 0xb7270bb26729e9b9)
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
#endif