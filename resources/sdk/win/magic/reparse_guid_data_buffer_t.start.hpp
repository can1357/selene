#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REPARSE_GUID_DATA_BUFFER.ReparseTag", reparse_tag, 0x0, 0x20, true, 0x38e0b860b0108984)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REPARSE_GUID_DATA_BUFFER.ReparseDataLength", reparse_data_length, 0x20, 0x10, true, 0x5d226ea48cc6c36b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_REPARSE_GUID_DATA_BUFFER.ReparseGuid", reparse_guid, 0x40, 0x80, true, 0xeeb478df2e834278)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_REPARSE_GUID_DATA_BUFFER.GenericReparseBuffer.DataBuffer", data_buffer, 0x0, 0x8, true, 0x85fe3f4afec7671)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_generic_reparse_buffer_t), "_REPARSE_GUID_DATA_BUFFER.GenericReparseBuffer", generic_reparse_buffer, 0xc0, 0x8, true, 0xdc40687becb64467)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif