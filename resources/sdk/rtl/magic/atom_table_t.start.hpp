#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ATOM_TABLE.Signature", signature, 0x0, 0x20, true, 0x6522e6b7421304a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RTL_ATOM_TABLE.ReferenceCount", reference_count, 0x20, 0x20, true, 0x4158eb663bb0dc86)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_RTL_ATOM_TABLE.PushLock", push_lock, 0x40, 0x40, true, 0x3336eb27f27b4e23)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::handle_table_t*), "_RTL_ATOM_TABLE.ExHandleTable", ex_handle_table, 0x80, 0x40, true, 0x5e5c7272b864ef30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ATOM_TABLE.Flags", flags, 0xc0, 0x20, true, 0xd83ee2a72e7d2136)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_ATOM_TABLE.NumberOfBuckets", number_of_buckets, 0xe0, 0x20, true, 0xf52ee61ff653bce1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::atom_table_entry_t*, 1>), "_RTL_ATOM_TABLE.Buckets", buckets, 0x100, 0x40, true, 0x6dbb81c3c6ef085)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif