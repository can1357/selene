#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GET_FILTER_FILE_IDENTIFIER_OUTPUT.FilterFileIdentifierLength", filter_file_identifier_length, 0x0, 0x10, true, 0x16f9791741e5a61f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_GET_FILTER_FILE_IDENTIFIER_OUTPUT.FilterFileIdentifier", filter_file_identifier, 0x10, 0x8, true, 0xa7df5b1f10b743ce)
#else
#define _m00
#define _m01
#endif