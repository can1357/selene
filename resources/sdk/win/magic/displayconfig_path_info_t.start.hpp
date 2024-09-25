#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_path_source_info_t), "DISPLAYCONFIG_PATH_INFO.sourceInfo", source_info, 0x0, 0xa0, true, 0x3a630c9c3b1619fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_path_target_info_t), "DISPLAYCONFIG_PATH_INFO.targetInfo", target_info, 0xa0, 0x80, true, 0x4bf71ec2bf0182a8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_INFO.flags", flags, 0x220, 0x20, true, 0x2e6a0a0d2dcec344)
#else
#define _m00
#define _m01
#define _m02
#endif