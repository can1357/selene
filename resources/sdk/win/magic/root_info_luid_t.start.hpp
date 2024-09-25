#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ROOT_INFO_LUID.LowPart", low_part, 0x0, 0x20, true, 0xbd41d67c4f7c8af4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ROOT_INFO_LUID.HighPart", high_part, 0x20, 0x20, true, 0x694d752192ea0974)
#else
#define _m00
#define _m01
#endif