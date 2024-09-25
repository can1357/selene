#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_DUMP_CONTROL.Stream", stream, 0x0, 0x40, true, 0xc098202deccc5b09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_DUMP_CONTROL.Detail", detail, 0x40, 0x20, true, 0x195bbe9902a38604)
#else
#define _m00
#define _m01
#endif