#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentflags_t), "_DXGK_SEGMENTDESCRIPTOR3.Flags", flags, 0x0, 0x20, true, 0x934056ee9200c5ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR3.BaseAddress", base_address, 0x40, 0x40, true, 0x9192e09d6e80af59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR3.CpuTranslatedAddress", cpu_translated_address, 0x80, 0x40, true, 0x1dfbbd530af8eb6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR3.Size", size, 0xc0, 0x40, true, 0x3ced2ee521e35f96)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR3.NbOfBanks", nb_of_banks, 0x100, 0x20, true, 0x63227c2518ef6de9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_DXGK_SEGMENTDESCRIPTOR3.pBankRangeTable", p_bank_range_table, 0x140, 0x40, true, 0xdd1d51c87c04eec3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR3.CommitLimit", commit_limit, 0x180, 0x40, true, 0xc8ca4e2ad5be583c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR3.SystemMemoryEndAddress", system_memory_end_address, 0x1c0, 0x40, true, 0x69c70ce02b5b7686)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif