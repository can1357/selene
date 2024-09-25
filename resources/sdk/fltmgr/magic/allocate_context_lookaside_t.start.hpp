#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_ALLOCATE_CONTEXT_LOOKASIDE.Filter", filter, 0x0, 0x40, true, 0x12e81b4c48b6d4c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_ALLOCATE_CONTEXT_LOOKASIDE.ContextCleanupCallback", context_cleanup_callback, 0x40, 0x40, true, 0xc8a62955a3f2eb77)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_ALLOCATE_CONTEXT_LOOKASIDE.Next", next, 0x80, 0x40, true, 0xac88fe36035aa792)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALLOCATE_CONTEXT_LOOKASIDE.ContextType", context_type, 0xc0, 0x10, true, 0xbb056cea5f7b9ab4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_LOOKASIDE.Flags", flags, 0xd0, 0x8, true, 0xf93add5f63538720)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_LOOKASIDE.AllocationType", allocation_type, 0xd8, 0x8, true, 0x6ff366d5ed39d7cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_ALLOCATE_CONTEXT_LOOKASIDE.NonPaged", non_paged, 0x200, 0x0, true, 0x4518eca451abcd37)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_ALLOCATE_CONTEXT_LOOKASIDE.Paged", paged, 0x600, 0x0, true, 0xceb6994f1352d91c)
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