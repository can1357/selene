#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_VERSION.Version", version, 0x0, 0x20, true, 0xf390f4c2497f9bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_VERSION.Size", size, 0x20, 0x20, true, 0x26e72d37c2694d87)
#else
#define _m00
#define _m01
#endif