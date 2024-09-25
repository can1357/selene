#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MMCLONE_DESCRIPTOR.CloneNode", clone_node, 0x0, 0xc0, true, 0xc1a7e60feee86b74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmclone_descriptor_t*), "_MMCLONE_DESCRIPTOR.Next", next, 0x0, 0x40, true, 0x83384e52a5b02e50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmclone_block_t*), "_MMCLONE_DESCRIPTOR.StartingCloneBlock", starting_clone_block, 0xc0, 0x40, true, 0x47cff974c1194b92)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmclone_block_t*), "_MMCLONE_DESCRIPTOR.EndingCloneBlock", ending_clone_block, 0x100, 0x40, true, 0xadae4df4d4583c89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_DESCRIPTOR.NumberOfPtes", number_of_ptes, 0x140, 0x40, true, 0xda85e25b82392d49)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MMCLONE_DESCRIPTOR.NumberOfReferences", number_of_references, 0x180, 0x40, true, 0xadb6d6f93a26106f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmclone_header_t*), "_MMCLONE_DESCRIPTOR.CloneHeader", clone_header, 0x1c0, 0x40, true, 0xeb4b5a20190c183a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_DESCRIPTOR.NonPagedPoolQuotaCharge", non_paged_pool_quota_charge, 0x200, 0x40, true, 0x2155026743852a6e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMCLONE_DESCRIPTOR.NestingLevel", nesting_level, 0x300, 0x40, true, 0x556e8df3787bba80)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_MMCLONE_DESCRIPTOR.DeleteList", delete_list, 0x280, 0x80, true, 0xa6b267b7ab8cedc9)
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
#endif