#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DESCRIPTOR_HEADER.Version", version, 0x0, 0x20, true, 0xf058b43c34a635aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DESCRIPTOR_HEADER.Size", size, 0x20, 0x20, true, 0xdc4aa8c544c78543)
#else
#define _m00
#define _m01
#endif