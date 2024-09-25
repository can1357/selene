#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_WORKINGSET_ENTRY.UniqueProcessId", unique_process_id, 0x0, 0x20, true, 0x85fc83c202c706b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_WORKINGSET_ENTRY.SessionId", session_id, 0x0, 0x20, true, 0xd86aa4fc511242aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKINGSET_ENTRY.WorkingSetPageCount", working_set_page_count, 0x40, 0x40, true, 0xb0c1e8d1ee7642d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKINGSET_ENTRY.CommitPageCount", commit_page_count, 0x80, 0x40, true, 0x967f4d703564dad6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKINGSET_ENTRY.PagedPoolPageCount", paged_pool_page_count, 0xc0, 0x40, true, 0x5003aeea9402eb99)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKINGSET_ENTRY.VirtualSizeInPages", virtual_size_in_pages, 0xc0, 0x40, true, 0x1bdee0ed7655bbd7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_WORKINGSET_ENTRY.PrivateWorkingSetPageCount", private_working_set_page_count, 0x100, 0x40, true, 0x832c46b9f92a2f15)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif