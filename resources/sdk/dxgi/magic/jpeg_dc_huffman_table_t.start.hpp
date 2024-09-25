#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "DXGI_JPEG_DC_HUFFMAN_TABLE.CodeCounts", code_counts, 0x0, 0x60, true, 0x885e55ddd9fa766f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "DXGI_JPEG_DC_HUFFMAN_TABLE.CodeValues", code_values, 0x60, 0x60, true, 0x449cdcc14d45f8fa)
#else
#define _m00
#define _m01
#endif