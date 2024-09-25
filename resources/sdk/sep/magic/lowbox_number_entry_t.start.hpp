#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_entry_t), "_SEP_LOWBOX_NUMBER_ENTRY.HashEntry", hash_entry, 0x0, 0xc0, true, 0x4040add1ad44e59d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_LOWBOX_NUMBER_ENTRY.ReferenceCount", reference_count, 0xc0, 0x40, true, 0x1f7c32dc2103f7b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_LOWBOX_NUMBER_ENTRY.PackageSid", package_sid, 0x100, 0x40, true, 0x9d04da30692f1357)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEP_LOWBOX_NUMBER_ENTRY.LowboxNumber", lowbox_number, 0x140, 0x20, true, 0x8be784b9fd9af5f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_LOWBOX_NUMBER_ENTRY.AtomTable", atom_table, 0x180, 0x40, true, 0xd2e0cacf2eabbae7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif