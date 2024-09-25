#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.Signature", signature, 0x0, 0x20, true, 0xeb191f8d677445f5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.Version", version, 0x20, 0x20, true, 0x68bb6eb093b7d757)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.Length", length, 0x40, 0x20, true, 0x5c24d32b236065d3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_packet_flags_t), "_WHEA_ERROR_PACKET_V2.Flags", flags, 0x60, 0x20, true, 0xbafcc3dc678111d2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_type_t), "_WHEA_ERROR_PACKET_V2.ErrorType", error_type, 0x80, 0x20, true, 0xb00f79b21ba72380)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_ERROR_PACKET_V2.ErrorSeverity", error_severity, 0xa0, 0x20, true, 0x8e6aafbd0611c73c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.ErrorSourceId", error_source_id, 0xc0, 0x20, true, 0xbd7450d495508232)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_source_type_t), "_WHEA_ERROR_PACKET_V2.ErrorSourceType", error_source_type, 0xe0, 0x20, true, 0x613bf640201787c5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_ERROR_PACKET_V2.NotifyType", notify_type, 0x100, 0x80, true, 0x37414c5105b791b1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ERROR_PACKET_V2.Context", context, 0x180, 0x40, true, 0x55640b8493a2c56e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_packet_data_format_t), "_WHEA_ERROR_PACKET_V2.DataFormat", data_format, 0x1c0, 0x20, true, 0x9f19dc7a726ac0f0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.DataOffset", data_offset, 0x200, 0x20, true, 0x46dca527c6e980bf)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.DataLength", data_length, 0x220, 0x20, true, 0xaad55920f452bdae)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.PshedDataOffset", pshed_data_offset, 0x240, 0x20, true, 0x95947443398e6dc6)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V2.PshedDataLength", pshed_data_length, 0x260, 0x20, true, 0xaa02276743717e24)
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
#define _m12
#define _m13
#define _m14
#endif