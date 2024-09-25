#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IMAGE_COR_ILMETHOD_SECT_SMALL.Kind", kind, 0x0, 0x8, true, 0xac91450fbfa3a72f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "IMAGE_COR_ILMETHOD_SECT_SMALL.DataSize", data_size, 0x8, 0x8, true, 0x70eedffbc8f4293b)
#else
#define _m00
#define _m01
#endif