#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_STATUS_UNBIND_WORKITEM.WorkItem", work_item, 0x0, 0x80, true, 0xb7b221a518f9c0ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_STATUS_UNBIND_WORKITEM.Miniport", miniport, 0x280, 0x40, true, 0x327f107d72d39ddc)
#else
#define _m00
#define _m01
#endif