#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MM_PAGE_ACCESS_INFO_HEADER.Link", link, 0x0, 0x40, true, 0x1a6acced6c891793)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum mm::page_access_type_t), "_MM_PAGE_ACCESS_INFO_HEADER.Type", type, 0x40, 0x20, true, 0x74681113b61e5700)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_PAGE_ACCESS_INFO_HEADER.EmptySequenceNumber", empty_sequence_number, 0x60, 0x20, true, 0x2c8e32400309723a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_PAGE_ACCESS_INFO_HEADER.CurrentFileIndex", current_file_index, 0x60, 0x20, true, 0xfbb5e44dfdb7c9cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGE_ACCESS_INFO_HEADER.CreateTime", create_time, 0x80, 0x40, true, 0x82d82a822848c4aa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGE_ACCESS_INFO_HEADER.EmptyTime", empty_time, 0xc0, 0x40, true, 0xa4308ea0d1ec0192)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::page_access_info_t*), "_MM_PAGE_ACCESS_INFO_HEADER.TempEntry", temp_entry, 0xc0, 0x40, true, 0x2429f260a5c5c0e2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::page_access_info_t*), "_MM_PAGE_ACCESS_INFO_HEADER.PageEntry", page_entry, 0x100, 0x40, true, 0xf396e51fa2b02571)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_MM_PAGE_ACCESS_INFO_HEADER.FileEntry", file_entry, 0x140, 0x40, true, 0x76868b8b8e091236)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_MM_PAGE_ACCESS_INFO_HEADER.FirstFileEntry", first_file_entry, 0x180, 0x40, true, 0xcd383d34098ca09e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MM_PAGE_ACCESS_INFO_HEADER.Process", process, 0x1c0, 0x40, true, 0xd6e3a20f915502bb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_PAGE_ACCESS_INFO_HEADER.SessionId", session_id, 0x200, 0x20, true, 0x2c2d36cb5cdae756)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_MM_PAGE_ACCESS_INFO_HEADER.PageFrameEntry", page_frame_entry, 0x100, 0x40, true, 0x68572c23ed17eff3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_MM_PAGE_ACCESS_INFO_HEADER.LastPageFrameEntry", last_page_frame_entry, 0x140, 0x40, true, 0xe11bdac11276ff4)
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
#define _m13
#endif