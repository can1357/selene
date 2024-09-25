#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_POWER_WORK_ITEM.WorkItem", work_item, 0x0, 0x0, false, 0xc9376575be9deb32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POWER_WORK_ITEM.pIrp", p_irp, 0x0, 0x0, false, 0x3d51a83773f013bb)
#else
#define _m00
#define _m01
#endif