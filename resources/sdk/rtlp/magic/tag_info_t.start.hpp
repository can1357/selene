#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RTLP_TAG_INFO.Id", id, 0x0, 0x80, true, 0x581be874369ddff5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_TAG_INFO.CurrentAllocatedBytes", current_allocated_bytes, 0x80, 0x40, true, 0xea6e209315ebeea0)
#else
#define _m00
#define _m01
#endif