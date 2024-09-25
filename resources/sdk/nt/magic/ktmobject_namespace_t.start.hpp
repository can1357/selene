#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_table_t), "_KTMOBJECT_NAMESPACE.Table", table, 0x0, 0x40, true, 0xcbae806f5bfccd24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KTMOBJECT_NAMESPACE.Mutex", mutex, 0x340, 0xc0, true, 0xc404136fa3b441c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTMOBJECT_NAMESPACE.LinksOffset", links_offset, 0x500, 0x10, true, 0x508a7758c82afce4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTMOBJECT_NAMESPACE.GuidOffset", guid_offset, 0x510, 0x10, true, 0xf2157648facf0e48)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTMOBJECT_NAMESPACE.Expired", expired, 0x520, 0x8, true, 0x9e8b0de49fb01cb3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif