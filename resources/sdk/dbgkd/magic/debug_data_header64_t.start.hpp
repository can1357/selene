#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::list_entry64_t), "DBGKD_DEBUG_DATA_HEADER64.List", list, 0x0, 0x80, true, 0x43df27740686c457)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DBGKD_DEBUG_DATA_HEADER64.OwnerTag", owner_tag, 0x80, 0x20, true, 0xb76fa93c9165d647)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DBGKD_DEBUG_DATA_HEADER64.Size", size, 0xa0, 0x20, true, 0xf8eef11ade94685a)
#else
#define _m00
#define _m01
#define _m02
#endif