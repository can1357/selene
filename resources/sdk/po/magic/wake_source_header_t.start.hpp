#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum po::wake_source_type_t), "_PO_WAKE_SOURCE_HEADER.Type", type, 0x0, 0x20, true, 0xf961dabfbe27615e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_WAKE_SOURCE_HEADER.Size", size, 0x20, 0x20, true, 0x45a6599f720c92ca)
#else
#define _m00
#define _m01
#endif