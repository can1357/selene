#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_MODE_INFO.infoType", info_type, 0x0, 0x20, true, 0xbde3c3cdaefdad3b, 32, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_MODE_INFO.id", id, 0x20, 0x20, true, 0x7f024204ed14f7d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "DISPLAYCONFIG_MODE_INFO.adapterId", adapter_id, 0x40, 0x40, true, 0x421c0c540cdddacb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_target_mode_t), "DISPLAYCONFIG_MODE_INFO.targetMode", target_mode, 0x80, 0x80, true, 0xa41bbdd4b334416a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_source_mode_t), "DISPLAYCONFIG_MODE_INFO.sourceMode", source_mode, 0x80, 0xa0, true, 0xd2055f989421c6c8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_desktop_image_info_t), "DISPLAYCONFIG_MODE_INFO.desktopImageInfo", desktop_image_info, 0x80, 0x40, true, 0x506a5749c8fce157)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif