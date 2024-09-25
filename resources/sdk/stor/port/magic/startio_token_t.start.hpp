#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_STARTIO_TOKEN.Link", link, 0x0, 0x0, false, 0xf2a7673ac311d0a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_TOKEN.Node", node, 0x0, 0x0, false, 0xe714fb93f9454018)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STARTIO_TOKEN.Number", number, 0x0, 0x0, false, 0xf40a127267f4181d)
#else
#define _m00
#define _m01
#define _m02
#endif