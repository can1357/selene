#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_RAID_WORK_ITEM_CONTEXT.WorkItem", work_item, 0x0, 0x40, true, 0x2f96fbcaf543eec3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RAID_WORK_ITEM_CONTEXT.Irp", irp, 0x40, 0x40, true, 0xaeacb3ebbf0c788e)
#else
#define _m00
#define _m01
#endif