#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CREATE_USN_JOURNAL_DATA.MaximumSize", maximum_size, 0x0, 0x40, true, 0xab3d123878ed6473)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CREATE_USN_JOURNAL_DATA.AllocationDelta", allocation_delta, 0x40, 0x40, true, 0xc07cd2176e954777)
#else
#define _m00
#define _m01
#endif