#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_INFORMATION.PagedPoolCommitPageCount", paged_pool_commit_page_count, 0x0, 0x40, true, 0x76254929bf42172e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_INFORMATION.NonPagedPoolPageCount", non_paged_pool_page_count, 0x40, 0x40, true, 0xf2e88396b5ca264a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_INFORMATION.MdlPageCount", mdl_page_count, 0x80, 0x40, true, 0x1df6619bf6f605d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_INFORMATION.CommitPageCount", commit_page_count, 0xc0, 0x40, true, 0xec47531204e7d87c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif