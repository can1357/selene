#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PM_WOL_PATTERN.Header", header, 0x0, 0x20, true, 0x867aead365071eb2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_WOL_PATTERN.Flags", flags, 0x20, 0x20, true, 0x7784f2bc6ef531b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_WOL_PATTERN.Priority", priority, 0x40, 0x20, true, 0x48a34c257e2de16)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pm_wol_packet_t), "_NDIS_PM_WOL_PATTERN.WoLPacketType", wo_l_packet_type, 0x60, 0x20, true, 0xfda609fba8ea8dbc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_counted_string_t), "_NDIS_PM_WOL_PATTERN.FriendlyName", friendly_name, 0x80, 0x20, true, 0xabb523418aad962c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_WOL_PATTERN.PatternId", pattern_id, 0x4a0, 0x20, true, 0xfda092217663609)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_WOL_PATTERN.NextWoLPatternOffset", next_wo_l_pattern_offset, 0x4c0, 0x20, true, 0x6cc34c4e6c981797)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif