#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WOL_XLATION_CONTEXT.OriginalOid", original_oid, 0x0, 0x20, true, 0x408da2562b8d97b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_WOL_XLATION_CONTEXT.InformationBuffer", information_buffer, 0x40, 0x40, true, 0xdca08170668928df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WOL_XLATION_CONTEXT.InformationBufferLength", information_buffer_length, 0x80, 0x20, true, 0x49623a86674b5dcf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_wol_pattern_t*), "_NDIS_WOL_XLATION_CONTEXT.WolPattern", wol_pattern, 0xc0, 0x40, true, 0xc778cfeff52a165c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_packet_pattern_t*), "_NDIS_WOL_XLATION_CONTEXT.PacketPattern", packet_pattern, 0xc0, 0x40, true, 0x170aff5b329d73e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WOL_XLATION_CONTEXT.PatternToRemove", pattern_to_remove, 0xc0, 0x20, true, 0xe4f4d160e79494c3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif