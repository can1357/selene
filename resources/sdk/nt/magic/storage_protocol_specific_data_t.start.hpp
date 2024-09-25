#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_protocol_type_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolType", protocol_type, 0x0, 0x20, true, 0x118a6f414663f049)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.DataType", data_type, 0x20, 0x20, true, 0xaf7a895fb012a75c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataRequestValue", protocol_data_request_value, 0x40, 0x20, true, 0x7a4e1d6a0218f86f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataRequestSubValue", protocol_data_request_sub_value, 0x60, 0x20, true, 0x8b052045b14b3a66)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataOffset", protocol_data_offset, 0x80, 0x20, true, 0x9249c80c119b8eb0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataLength", protocol_data_length, 0xa0, 0x20, true, 0x4baa1a592f8c17e2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.FixedProtocolReturnData", fixed_protocol_return_data, 0xc0, 0x20, true, 0xc0c514e64179a5d3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataRequestSubValue2", protocol_data_request_sub_value2, 0xe0, 0x20, true, 0xdb82565f440e95a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PROTOCOL_SPECIFIC_DATA.ProtocolDataRequestSubValue3", protocol_data_request_sub_value3, 0x100, 0x20, true, 0x7c0117e3107fbb1)
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
#endif