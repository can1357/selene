#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "DXGI_JPEG_AC_HUFFMAN_TABLE.CodeCounts", code_counts, 0x0, 0x80, true, 0xcd0e5e366d9cb07)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 162>), "DXGI_JPEG_AC_HUFFMAN_TABLE.CodeValues", code_values, 0x80, 0x10, true, 0xeabd8f70e0a8c4e8)
#else
#define _m00
#define _m01
#endif