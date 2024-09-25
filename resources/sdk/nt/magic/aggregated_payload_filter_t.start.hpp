#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_AGGREGATED_PAYLOAD_FILTER.MagicValue", magic_value, 0x0, 0xc, true, 0x1cd0bec66a268a48, 12, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_AGGREGATED_PAYLOAD_FILTER.DescriptorVersion", descriptor_version, 0xc, 0x4, true, 0x1bbf124db088b824, 4, uint16_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.Size", size, 0x10, 0x10, true, 0x95370e2c4d8d2e7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.PredicateCount", predicate_count, 0x20, 0x10, true, 0x635739e7166c547d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AGGREGATED_PAYLOAD_FILTER.HashedEventIdBitmap", hashed_event_id_bitmap, 0x40, 0x40, true, 0x67183ef435716c50)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_AGGREGATED_PAYLOAD_FILTER.ProviderGuid", provider_guid, 0x80, 0x80, true, 0x255044e0ef350b52)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.EachEventTableOffset", each_event_table_offset, 0x100, 0x10, true, 0xbd7a1d4fc8a5744c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.EachEventTableLength", each_event_table_length, 0x110, 0x10, true, 0x54291421d5e3267)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.PayloadDecoderTableOffset", payload_decoder_table_offset, 0x120, 0x10, true, 0x768d8d1e6fed1e35)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.PayloadDecoderTableLength", payload_decoder_table_length, 0x130, 0x10, true, 0xc4dbeeba47e2fe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.EventFilterTableOffset", event_filter_table_offset, 0x140, 0x10, true, 0x994619805fca9d2d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.EventFilterTableLength", event_filter_table_length, 0x150, 0x10, true, 0x2b02492d502d3ce4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.UNICODEStringTableOffset", unicode_string_table_offset, 0x160, 0x10, true, 0xfefe296180703181)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.UNICODEStringTableLength", unicode_string_table_length, 0x170, 0x10, true, 0xe05c211920ff7db3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.ANSIStringTableOffset", ansi_string_table_offset, 0x180, 0x10, true, 0x1b78d4a285559387)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AGGREGATED_PAYLOAD_FILTER.ANSIStringTableLength", ansi_string_table_length, 0x190, 0x10, true, 0x9880de2b1318a5e8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::event_payload_predicate_t, 1>), "_AGGREGATED_PAYLOAD_FILTER.PredicateTable", predicate_table, 0x1c0, 0xc0, true, 0x3f299b0b11f6d15d)
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
#define _m15
#define _m16
#endif