#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_ALLOCATE_CONTEXT_DIRECT.Filter", filter, 0x0, 0x40, true, 0x616fa1958ab8fd74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t)>*), "_ALLOCATE_CONTEXT_DIRECT.ContextCleanupCallback", context_cleanup_callback, 0x40, 0x40, true, 0x93dab41bf98e8f8d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::allocate_context_header_t*), "_ALLOCATE_CONTEXT_DIRECT.Next", next, 0x80, 0x40, true, 0x7710c8ca0268f438)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ALLOCATE_CONTEXT_DIRECT.ContextType", context_type, 0xc0, 0x10, true, 0x5431dbbba47e106c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_DIRECT.Flags", flags, 0xd0, 0x8, true, 0xaea078eac6ddeb63)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ALLOCATE_CONTEXT_DIRECT.AllocationType", allocation_type, 0xd8, 0x8, true, 0x590cb3fe1280a286)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALLOCATE_CONTEXT_DIRECT.PoolTag", pool_tag, 0x100, 0x20, true, 0x949d770edcc9ac11)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif