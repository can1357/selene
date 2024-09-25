#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksdpc_item_t), "KSBUFFER_ITEM.DpcItem", dpc_item, 0x0, 0x0, false, 0xeeee38a49e06a37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "KSBUFFER_ITEM.BufferList", buffer_list, 0x0, 0x0, false, 0xe4776307e32c3999)
#else
#define _m00
#define _m01
#endif