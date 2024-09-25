#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::lock_t), "_WNF_SCOPE_MAP_ENTRY.MapEntryLock", map_entry_lock, 0x0, 0x40, true, 0x4cd656503c393f69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WNF_SCOPE_MAP_ENTRY.MapEntryHead", map_entry_head, 0x40, 0x80, true, 0xad9a0633f87f9bd9)
#else
#define _m00
#define _m01
#endif