#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_IRP_WORK_ITEM.Item", item, 0x0, 0x0, false, 0x51bbd9878faaae9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_IRP_WORK_ITEM.Miniport", miniport, 0x0, 0x0, false, 0x4166d0463e26160f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_IRP_WORK_ITEM.Irp", irp, 0x0, 0x0, false, 0x991b549048869e34)
#else
#define _m00
#define _m01
#define _m02
#endif