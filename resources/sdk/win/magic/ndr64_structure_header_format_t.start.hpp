#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_STRUCTURE_HEADER_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x818165fadb3c82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_STRUCTURE_HEADER_FORMAT.Alignment", alignment, 0x8, 0x8, true, 0x7b843dae9d1a28fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_structure_flags_t), "_NDR64_STRUCTURE_HEADER_FORMAT.Flags", flags, 0x10, 0x8, true, 0x27672ece9dff9f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_STRUCTURE_HEADER_FORMAT.Reserve", reserve, 0x18, 0x8, true, 0x989cc69c9852c0ac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_STRUCTURE_HEADER_FORMAT.MemorySize", memory_size, 0x20, 0x20, true, 0x956e06f7a4307103)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif