#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_SYSTEM_MEMORY_INFORMATION.PagedPoolCommitPageCount", paged_pool_commit_page_count, 0x0, 0x40, true, 0x516d1cf123cfa344)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_SYSTEM_MEMORY_INFORMATION.NonPagedPoolPageCount", non_paged_pool_page_count, 0x40, 0x40, true, 0x4059097e07466460)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_SYSTEM_MEMORY_INFORMATION.MdlPageCount", mdl_page_count, 0x80, 0x40, true, 0x1554749f68d0da79)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_SYSTEM_MEMORY_INFORMATION.CommitPageCount", commit_page_count, 0xc0, 0x40, true, 0xe6e5edfe6761c141)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif