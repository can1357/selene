#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "WORKITEM_WITH_IRP.Workitem", workitem, 0x0, 0x0, true, 0x13cdd69cc92a33e4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "WORKITEM_WITH_IRP.Irp", irp, 0x100, 0x40, true, 0x441fe8d639c12769)
#else
#define _m00
#define _m01
#endif