#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PO_IRP_QUEUE.CurrentIrp", current_irp, 0x0, 0x40, true, 0x9a490d979834602)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PO_IRP_QUEUE.PendingIrpList", pending_irp_list, 0x40, 0x40, true, 0x20f05d4fc1efa528)
#else
#define _m00
#define _m01
#endif