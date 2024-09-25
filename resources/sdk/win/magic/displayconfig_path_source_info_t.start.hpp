#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.adapterId", adapter_id, 0x0, 0x40, true, 0x4dca71ef07b19fc7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.id", id, 0x40, 0x20, true, 0x34057e1579009fce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.modeInfoIdx", mode_info_idx, 0x60, 0x20, true, 0xa5bc90d685ff1596)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.cloneGroupId", clone_group_id, 0x60, 0x10, true, 0x48df76f5f92d04ef, 16, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.sourceModeInfoIdx", source_mode_info_idx, 0x70, 0x10, true, 0xf6b093bdcd4baa90, 16, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_PATH_SOURCE_INFO.statusFlags", status_flags, 0x80, 0x20, true, 0xe90917b99d931acc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif