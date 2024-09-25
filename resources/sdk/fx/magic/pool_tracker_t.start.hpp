#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FX_POOL_TRACKER.Link", link, 0x0, 0x80, true, 0x6b825566eab3fa11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pool_t*), "FX_POOL_TRACKER.Pool", pool, 0x80, 0x40, true, 0x411bab8b4c5b3a69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FX_POOL_TRACKER.Tag", tag, 0xc0, 0x20, true, 0x8dbbd27e8df4f9b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FX_POOL_TRACKER.Size", size, 0x100, 0x40, true, 0xe67c007c69f0fecc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "FX_POOL_TRACKER.PoolType", pool_type, 0x140, 0x20, true, 0x9f7011496c3a0c30)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FX_POOL_TRACKER.CallersAddress", callers_address, 0x180, 0x40, true, 0x380b985a8e0c26af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif