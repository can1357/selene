#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_protocol_type_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolType", protocol_type, 0x0, 0x20, true, 0x31bd96890347ffd7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.DataType", data_type, 0x20, 0x20, true, 0xdec6e7796c044280)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataValue", protocol_data_value, 0x40, 0x20, true, 0x60052abeac6bffa0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataSubValue", protocol_data_sub_value, 0x60, 0x20, true, 0x13f012a5974fa94e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataOffset", protocol_data_offset, 0x80, 0x20, true, 0xa711b2dfab2291fb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataLength", protocol_data_length, 0xa0, 0x20, true, 0x6115f2ef593baff6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.FixedProtocolReturnData", fixed_protocol_return_data, 0xc0, 0x20, true, 0x78f449b931eebf6b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataSubValue2", protocol_data_sub_value2, 0xe0, 0x20, true, 0xc036148d786df18b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataSubValue3", protocol_data_sub_value3, 0x100, 0x20, true, 0x74da893483ea3eec)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataSubValue4", protocol_data_sub_value4, 0x120, 0x20, true, 0xce46e22b02318d71)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA_EXT.ProtocolDataSubValue5", protocol_data_sub_value5, 0x140, 0x20, true, 0x7f9f0e5da3ce3477)
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
#endif