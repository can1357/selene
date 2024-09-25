#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_REPLACE_PROCESSOR_LIST_V1.AffinityMask", affinity_mask, 0x0, 0x40, true, 0xa20bb85f1d55b6fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PROCESSOR_LIST_V1.AllocatedCount", allocated_count, 0x40, 0x20, true, 0x56f5668e26f24e2b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_REPLACE_PROCESSOR_LIST_V1.Count", count, 0x60, 0x20, true, 0xa5718af2792538bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_PNP_REPLACE_PROCESSOR_LIST_V1.ApicIds", apic_ids, 0x80, 0x20, true, 0x34cbf0c76e9abc11)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif