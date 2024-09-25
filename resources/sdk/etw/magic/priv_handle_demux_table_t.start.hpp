#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_ETW_PRIV_HANDLE_DEMUX_TABLE.Tree", tree, 0x0, 0x80, true, 0x8feee3f78533b036)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_ETW_PRIV_HANDLE_DEMUX_TABLE.Lock", lock, 0x80, 0x40, true, 0xd9e4ceff676a8de0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_PRIV_HANDLE_DEMUX_TABLE.SequenceNumber", sequence_number, 0xc0, 0x10, true, 0xe8af99803732979c)
#else
#define _m00
#define _m01
#define _m02
#endif