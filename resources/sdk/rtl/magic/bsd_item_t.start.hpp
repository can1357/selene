#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::bsd_item_type_t), "_RTL_BSD_ITEM.Type", type, 0x0, 0x20, true, 0xfe3f1516eecb46f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_BSD_ITEM.DataBuffer", data_buffer, 0x40, 0x40, true, 0x97502431ea9de4db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_BSD_ITEM.DataLength", data_length, 0x80, 0x20, true, 0x1d9abd469f9183e0)
#else
#define _m00
#define _m01
#define _m02
#endif