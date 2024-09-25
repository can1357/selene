#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_TOO_SMALL.WnodeHeader", wnode_header, 0x0, 0x80, true, 0x2cd0d63c56c638c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_TOO_SMALL.SizeNeeded", size_needed, 0x180, 0x20, true, 0xc7be7a498ff922b1)
#else
#define _m00
#define _m01
#endif