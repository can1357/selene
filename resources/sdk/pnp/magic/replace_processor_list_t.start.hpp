#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_PNP_REPLACE_PROCESSOR_LIST.Affinity", affinity, 0x0, 0x40, true, 0xbb9cba7137ed9f44)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PROCESSOR_LIST.GroupCount", group_count, 0x40, 0x20, true, 0xc771400b35c57e8d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PROCESSOR_LIST.AllocatedCount", allocated_count, 0x60, 0x20, true, 0x90ef0daf43328af6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PROCESSOR_LIST.Count", count, 0x80, 0x20, true, 0x3541c31fe59dc410)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PNP_REPLACE_PROCESSOR_LIST.ApicIds", apic_ids, 0xa0, 0x20, true, 0x674cd78cd97ebf2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif