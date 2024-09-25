#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "KSDPC_ITEM.Dpc", dpc, 0x0, 0x0, false, 0xa9f6dd53f0f5308f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSDPC_ITEM.ReferenceCount", reference_count, 0x0, 0x0, false, 0x41e07759ef08ff91)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "KSDPC_ITEM.AccessLock", access_lock, 0x0, 0x0, false, 0xdfc6823c93667bd5)
#else
#define _m00
#define _m01
#define _m02
#endif