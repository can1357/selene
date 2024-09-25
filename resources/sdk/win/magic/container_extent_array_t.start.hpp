#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINER_EXTENT_ARRAY.size", size, 0x0, 0x20, true, 0x1b5985e9170dc784)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::container_extent_t**), "CONTAINER_EXTENT_ARRAY.extent", extent, 0x40, 0x40, true, 0xf6241cee9ab6da1c)
#else
#define _m00
#define _m01
#endif