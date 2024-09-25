#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::segment_t*), "_MMPAGE_FILE_EXPANSION.Segment", segment, 0x0, 0x40, true, 0xe46476e99fb67d64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMPAGE_FILE_EXPANSION.DereferenceList", dereference_list, 0x40, 0x80, true, 0xdb5a74ea2a84933)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MMPAGE_FILE_EXPANSION.Partition", partition, 0xc0, 0x40, true, 0xc7984d1a8235aa18)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGE_FILE_EXPANSION.RequestedExpansionSize", requested_expansion_size, 0x100, 0x40, true, 0xf0e22d5b5d888c26)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGE_FILE_EXPANSION.ActualExpansion", actual_expansion, 0x140, 0x40, true, 0xb932a75fe78dae0e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MMPAGE_FILE_EXPANSION.Event", event, 0x180, 0xc0, true, 0x5e1097ee650ee524)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MMPAGE_FILE_EXPANSION.InProgress", in_progress, 0x240, 0x20, true, 0x37fc6893614ca332)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void* volatile*), "_MMPAGE_FILE_EXPANSION.ActiveEntry", active_entry, 0x280, 0x40, true, 0xc593150412fb2ae7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGE_FILE_EXPANSION.LongFlags", long_flags, 0x260, 0x20, true, 0xb69305647c40067f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpage_file_expansion_flags_t), "_MMPAGE_FILE_EXPANSION.Flags", flags, 0x260, 0x20, true, 0x1096a25db253b1d9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpage_file_expansion_flags_t), "_MMPAGE_FILE_EXPANSION.u", u, 0x0, 0x0, false, 0xc1765f0199786b02)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMPAGE_FILE_EXPANSION.AttemptForCantExtend", attempt_for_cant_extend, 0x0, 0x0, false, 0xd69bfdcc0dba4a5d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MMPAGE_FILE_EXPANSION.PageFileContract", page_file_contract, 0x0, 0x0, false, 0xc18703aa9d68d73f)
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
#endif