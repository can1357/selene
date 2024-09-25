#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagORPC_EXTENT_ARRAY.size", size, 0x0, 0x20, true, 0x380000fd0f0c0e71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::orpc_extent_t**), "tagORPC_EXTENT_ARRAY.extent", extent, 0x40, 0x40, true, 0x5c9a65b343634878)
#else
#define _m00
#define _m01
#endif