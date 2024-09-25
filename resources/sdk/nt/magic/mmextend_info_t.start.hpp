#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMEXTEND_INFO.CommittedSize", committed_size, 0x0, 0x40, true, 0xcadca2234835292f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMEXTEND_INFO.ReferenceCount", reference_count, 0x40, 0x20, true, 0x11da65829719e75b)
#else
#define _m00
#define _m01
#endif