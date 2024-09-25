#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagENVOYDATA.contextId", context_id, 0x0, 0x80, true, 0x9b265ece136e589b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENVOYDATA.ulJunk1", ul_junk1, 0x80, 0x20, true, 0xd6a8bd1257b24686)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENVOYDATA.ulJunk2", ul_junk2, 0xa0, 0x20, true, 0x2ef9cd0300b863f3)
#else
#define _m00
#define _m01
#define _m02
#endif