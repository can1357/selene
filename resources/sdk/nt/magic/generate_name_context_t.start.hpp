#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GENERATE_NAME_CONTEXT.Checksum", checksum, 0x0, 0x10, true, 0x4aadd0f595d56b25)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GENERATE_NAME_CONTEXT.ChecksumInserted", checksum_inserted, 0x10, 0x8, true, 0x5540486bdee6c18c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GENERATE_NAME_CONTEXT.NameLength", name_length, 0x18, 0x8, true, 0xf3ceb6439d74d66b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 8>), "_GENERATE_NAME_CONTEXT.NameBuffer", name_buffer, 0x20, 0x80, true, 0xbd81827e3af614e8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERATE_NAME_CONTEXT.ExtensionLength", extension_length, 0xa0, 0x20, true, 0xeef69cbd2f46e6d8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 4>), "_GENERATE_NAME_CONTEXT.ExtensionBuffer", extension_buffer, 0xc0, 0x40, true, 0xedfb72376217a82)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERATE_NAME_CONTEXT.LastIndexValue", last_index_value, 0x100, 0x20, true, 0xf77e002c34ef5d7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif