#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KTMOBJECT_CURSOR.LastQuery", last_query, 0x0, 0x80, true, 0xbf40208b515cdd8a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTMOBJECT_CURSOR.ObjectIdCount", object_id_count, 0x80, 0x20, true, 0xd71e2f85828f4aac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_KTMOBJECT_CURSOR.ObjectIds", object_ids, 0xa0, 0x80, true, 0xed8adbfe2c66c191)
#else
#define _m00
#define _m01
#define _m02
#endif