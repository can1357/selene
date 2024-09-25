#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMP_OFFSET_ARRAY.FileOffset", file_offset, 0x0, 0x20, true, 0x228dc190b8c92a4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMP_OFFSET_ARRAY.DataBuffer", data_buffer, 0x40, 0x40, true, 0xf3a3017166870d63)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMP_OFFSET_ARRAY.DataLength", data_length, 0x80, 0x20, true, 0xf8b513dfa75616df)
#else
#define _m00
#define _m01
#define _m02
#endif