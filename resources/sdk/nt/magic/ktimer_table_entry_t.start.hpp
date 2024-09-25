#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTIMER_TABLE_ENTRY.Lock", lock, 0x0, 0x40, true, 0x2ddf8eb3d8969fb5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTIMER_TABLE_ENTRY.Entry", entry, 0x40, 0x80, true, 0x899aaf9848191913)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTIMER_TABLE_ENTRY.Time", time, 0xc0, 0x40, true, 0xa9f0b5651792e595)
#else
#define _m00
#define _m01
#define _m02
#endif