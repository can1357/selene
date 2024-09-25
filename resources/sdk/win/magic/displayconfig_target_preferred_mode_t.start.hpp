#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_TARGET_PREFERRED_MODE.header", header, 0x0, 0xa0, true, 0x782a8c946dd6fcb9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_TARGET_PREFERRED_MODE.width", width, 0xa0, 0x20, true, 0x4726a6656087bd4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_TARGET_PREFERRED_MODE.height", height, 0xc0, 0x20, true, 0x1bf0cca555bf47b0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_target_mode_t), "DISPLAYCONFIG_TARGET_PREFERRED_MODE.targetMode", target_mode, 0x100, 0x80, true, 0xa893e53df848cbee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif