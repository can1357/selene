#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CACHE_DESCRIPTOR.Level", level, 0x0, 0x8, true, 0x83089aa9f761300a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CACHE_DESCRIPTOR.Associativity", associativity, 0x8, 0x8, true, 0xed66f2a1fc5e4845)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CACHE_DESCRIPTOR.LineSize", line_size, 0x10, 0x10, true, 0x47b796cb8f037d54)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CACHE_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x39362d2aede5dbce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::processor_cache_type_t), "_CACHE_DESCRIPTOR.Type", type, 0x40, 0x20, true, 0xaa6968248fd49f63)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif