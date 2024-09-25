#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_RAID_SHARED_WORK_ITEM_CONTEXT.WorkItem", work_item, 0x0, 0x40, true, 0xec2ad89c8767e1d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RAID_SHARED_WORK_ITEM_CONTEXT.Irp", irp, 0x40, 0x40, true, 0x30511ab842c3af02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_SHARED_WORK_ITEM_CONTEXT.InUse", in_use, 0x80, 0x20, true, 0xc94a3becf541ccdd)
#else
#define _m00
#define _m01
#define _m02
#endif