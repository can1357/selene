#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_ARRAY_ELEMENT_INFO.ElementMemSize", element_mem_size, 0x0, 0x20, true, 0x78ab60b20d6eaa8d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_NDR64_ARRAY_ELEMENT_INFO.Element", element, 0x40, 0x40, true, 0xd66f46c142c4d042)
#else
#define _m00
#define _m01
#endif