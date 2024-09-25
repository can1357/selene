#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMWSLE.VirtualAddress", virtual_address, 0x0, 0x0, false, 0x9084872edac84256)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSLE.Long", _long, 0x0, 0x0, false, 0x21678dafd24ad5b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwslentry_t), "_MMWSLE.e1", e1, 0x0, 0x0, false, 0x79c43d6d9df0a451)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsle_free_entry_t), "_MMWSLE.e2", e2, 0x0, 0x0, false, 0xeaccf1b7fed2317f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif