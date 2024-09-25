#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR.BaseAddress", base_address, 0x0, 0x40, true, 0x51edb56f077de24d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR.CpuTranslatedAddress", cpu_translated_address, 0x40, 0x40, true, 0x2bcbb652ef8d42eb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR.Size", size, 0x80, 0x40, true, 0x9a1ae4085b719560)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR.NbOfBanks", nb_of_banks, 0xc0, 0x20, true, 0xaa363147ef15fa9f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_DXGK_SEGMENTDESCRIPTOR.pBankRangeTable", p_bank_range_table, 0x100, 0x40, true, 0x63fad93fe478096c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR.CommitLimit", commit_limit, 0x140, 0x40, true, 0x75383fe18f110031)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentflags_t), "_DXGK_SEGMENTDESCRIPTOR.Flags", flags, 0x180, 0x20, true, 0xb5380a45aec8dd8a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif