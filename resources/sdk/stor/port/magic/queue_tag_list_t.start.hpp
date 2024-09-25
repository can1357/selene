#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::queue_tag_list_header_t*), "_QUEUE_TAG_LIST.Header", header, 0x0, 0x40, true, 0x76d619a005086a14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::queue_tag_entry_t*), "_QUEUE_TAG_LIST.Buffer", buffer, 0x200, 0x40, true, 0xdbc446c66bdf3d40)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUEUE_TAG_LIST.TagsPerNode", tags_per_node, 0x240, 0x20, true, 0x81ebc528dbd7eb4f)
#else
#define _m00
#define _m01
#define _m02
#endif