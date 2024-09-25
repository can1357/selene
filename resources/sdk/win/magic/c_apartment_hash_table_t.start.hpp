#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cdword_hash_table_t), "CApartmentHashTable._hashtbl", hashtbl, 0x0, 0x40, true, 0x31017c0a82a86291)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CApartmentHashTable._fTableInitialized", f_table_initialized, 0x140, 0x20, true, 0x3a23833500aeb698)
#else
#define _m00
#define _m01
#endif