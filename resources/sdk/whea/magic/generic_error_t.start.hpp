#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::generic_error_blockstatus_t), "_WHEA_GENERIC_ERROR.BlockStatus", block_status, 0x0, 0x20, true, 0x420d990612187ca2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR.RawDataOffset", raw_data_offset, 0x20, 0x20, true, 0x352fc3e13ef6bf89)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR.RawDataLength", raw_data_length, 0x40, 0x20, true, 0x1c3bbd5248505726)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_GENERIC_ERROR.DataLength", data_length, 0x60, 0x20, true, 0xd8c8253a9cbfc31)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_GENERIC_ERROR.ErrorSeverity", error_severity, 0x80, 0x20, true, 0xd4564c6541e7fff1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_GENERIC_ERROR.Data", data, 0xa0, 0x8, true, 0xc22d7582bc07757e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif