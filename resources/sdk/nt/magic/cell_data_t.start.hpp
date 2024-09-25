#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_node_t), "_CELL_DATA.KeyNode", key_node, 0x0, 0x80, true, 0xd61b127418035c32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_value_t), "_CELL_DATA.KeyValue", key_value, 0x0, 0xc0, true, 0xa83ad1bb0e005013)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_security_t), "_CELL_DATA.KeySecurity", key_security, 0x0, 0x40, true, 0x15c8c2d7653a7470)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_index_t), "_CELL_DATA.KeyIndex", key_index, 0x0, 0x40, true, 0x778219ea57ef5125)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::big_data_t), "_CELL_DATA.ValueData", value_data, 0x0, 0x40, true, 0xff83cdb1646a5f9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CELL_DATA.KeyList", key_list, 0x0, 0x20, true, 0xf40f40054cbed63f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CELL_DATA.KeyString", key_string, 0x0, 0x10, true, 0x2fb3ba3a9de4ae5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif