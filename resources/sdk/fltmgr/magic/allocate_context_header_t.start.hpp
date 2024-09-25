#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_ALLOCATE_CONTEXT_HEADER.Filter", filter, 0x0, 0x40, true, 0xb3b79ae95a9dba17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_ALLOCATE_CONTEXT_HEADER.ContextCleanupCallback", context_cleanup_callback, 0x40, 0x40, true, 0xf3d1df45057f916a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_ALLOCATE_CONTEXT_HEADER.Next", next, 0x80, 0x40, true, 0x46b995cd9afa7075)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALLOCATE_CONTEXT_HEADER.ContextType", context_type, 0xc0, 0x10, true, 0xaf482390af1981b7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_HEADER.Flags", flags, 0xd0, 0x8, true, 0x94882dca3f076f67)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_HEADER.AllocationType", allocation_type, 0xd8, 0x8, true, 0xa1088f9a590fc467)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif