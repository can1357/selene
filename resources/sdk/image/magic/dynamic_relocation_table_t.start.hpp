#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION_TABLE.Version", version, 0x0, 0x20, true, 0x1ec51318e6f0db47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION_TABLE.Size", size, 0x20, 0x20, true, 0x6e14f46af9c223f1)
#else
#define _m00
#define _m01
#endif