#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_MINIPORT_WORK_ITEM.Link", link, 0x0, 0x40, true, 0x60901d0e94e2d5d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::work_item_type_t), "_NDIS_MINIPORT_WORK_ITEM.WorkItemType", work_item_type, 0x40, 0x20, true, 0x35df2cdf29e14248)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_WORK_ITEM.WorkItemContext", work_item_context, 0x80, 0x40, true, 0x74692800a89a59cd)
#else
#define _m00
#define _m01
#define _m02
#endif