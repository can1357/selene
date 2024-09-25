#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_LOCKED_LIST.Lock", lock, 0x0, 0x40, true, 0xacccc204fd8fdc18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STOR_LOCKED_LIST.List", list, 0x40, 0x80, true, 0x8c59144b0db520c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_LOCKED_LIST.Count", count, 0xc0, 0x20, true, 0x32205542407885d1)
#else
#define _m00
#define _m01
#define _m02
#endif