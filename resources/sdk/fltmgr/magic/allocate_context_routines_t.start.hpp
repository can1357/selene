#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_ALLOCATE_CONTEXT_ROUTINES.Filter", filter, 0x0, 0x40, true, 0x7cb631dc8bb537d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_ALLOCATE_CONTEXT_ROUTINES.ContextCleanupCallback", context_cleanup_callback, 0x40, 0x40, true, 0xc7b1e75d14fbdcb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_ALLOCATE_CONTEXT_ROUTINES.Next", next, 0x80, 0x40, true, 0xfa27078b120f3bca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALLOCATE_CONTEXT_ROUTINES.ContextType", context_type, 0xc0, 0x10, true, 0x8862659cd31a0c15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_ROUTINES.Flags", flags, 0xd0, 0x8, true, 0x8611fafb252e7a62)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_ROUTINES.AllocationType", allocation_type, 0xd8, 0x8, true, 0x35c14d13c87cd250)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint16_t)>*), "_ALLOCATE_CONTEXT_ROUTINES.ContextAllocateCallback", context_allocate_callback, 0x100, 0x40, true, 0x7c406e8eba983a84)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_ALLOCATE_CONTEXT_ROUTINES.ContextFreeCallback", context_free_callback, 0x140, 0x40, true, 0xa5ad91ea55be412a)
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