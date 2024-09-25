#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_WORKINGSET_ENTRY.UniqueProcessId", unique_process_id, 0x0, 0x20, true, 0x1611a0d7180c9423)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_WORKINGSET_ENTRY.SessionId", session_id, 0x0, 0x20, true, 0x796069e0526416cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.WorkingSetPageCount", working_set_page_count, 0x20, 0x40, true, 0x26ededf851f51b85)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.CommitPageCount", commit_page_count, 0x60, 0x40, true, 0x1221c6079565df2f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.PagedPoolPageCount", paged_pool_page_count, 0xa0, 0x40, true, 0x60128998c4a6e874)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.VirtualSizeInPages", virtual_size_in_pages, 0xa0, 0x40, true, 0x5ca86786b656509d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.PrivateWorkingSetPageCount", private_working_set_page_count, 0xe0, 0x40, true, 0xb343c6d2b9186aa8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.StoreSizeInPages", store_size_in_pages, 0x120, 0x40, true, 0x70d2d10cbe969dd2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.StoredPageCount", stored_page_count, 0x160, 0x40, true, 0xff7c2efbd2d78101)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.CommitDebtInPages", commit_debt_in_pages, 0x1a0, 0x40, true, 0xf429a9403497ac61)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_WORKINGSET_ENTRY.SharedCommitInPages", shared_commit_in_pages, 0x1e0, 0x40, true, 0x8e5cc561252d037d)
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
#endif