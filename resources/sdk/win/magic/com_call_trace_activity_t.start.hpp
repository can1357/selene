#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "ComCallTraceActivity._guidActivity", guid_activity, 0x20, 0x80, true, 0xaf39b271ea9aa0ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "ComCallTraceActivity._createdFromExisting", created_from_existing, 0xa0, 0x8, true, 0xea0018ea552dd2b9)
#else
#define _m00
#define _m01
#endif