#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_VALIDBITS.PlatformId", platform_id, 0x0, 0x1, true, 0x49e0a4cc613eedc5, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_VALIDBITS.Timestamp", timestamp, 0x1, 0x1, true, 0x2b7653a0c79bc7aa, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_VALIDBITS.PartitionId", partition_id, 0x2, 0x1, true, 0xc15ab82586f34159, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER_VALIDBITS.AsULONG", as_ulong, 0x0, 0x20, true, 0xdeae679a30984964)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif