#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_DATABASE.Magic", magic, 0x0, 0x20, true, 0xa6c9eff06a117c30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_DATABASE.Flags", flags, 0x20, 0x20, true, 0x13ddab969579a320)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_DATABASE.Tag", tag, 0x40, 0x20, true, 0x76770274fcfc20b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_segment_t*), "_RTL_TRACE_DATABASE.SegmentList", segment_list, 0x80, 0x40, true, 0xbc6620e6db11852)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_DATABASE.MaximumSize", maximum_size, 0xc0, 0x40, true, 0x5cd14043aa846eb2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_DATABASE.CurrentSize", current_size, 0x100, 0x40, true, 0xc22321e3c8ed239b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_TRACE_DATABASE.Owner", owner, 0x140, 0x40, true, 0xc9a027a78d6bfb0d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "_RTL_TRACE_DATABASE.Lock", lock, 0x180, 0x40, true, 0xf2ba603c78c22957)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_TRACE_DATABASE.NoOfBuckets", no_of_buckets, 0x2c0, 0x20, true, 0xcac78e7ec89372fe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_block_t**), "_RTL_TRACE_DATABASE.Buckets", buckets, 0x300, 0x40, true, 0xe7884bb54b0d3065)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(uint32_t, void**)>*), "_RTL_TRACE_DATABASE.HashFunction", hash_function, 0x340, 0x40, true, 0x659fc89401493160)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_DATABASE.NoOfTraces", no_of_traces, 0x380, 0x40, true, 0xf34d67e5ee5472bd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_TRACE_DATABASE.NoOfHits", no_of_hits, 0x3c0, 0x40, true, 0xb6fcb1875f91c92b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_RTL_TRACE_DATABASE.HashCounter", hash_counter, 0x400, 0x0, true, 0x1ce0caccc41b647c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif