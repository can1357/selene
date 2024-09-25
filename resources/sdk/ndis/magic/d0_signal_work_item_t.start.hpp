#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_D0_SIGNAL_WORK_ITEM.WorkItem", work_item, 0x0, 0x80, true, 0x77d096463e34c046)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_D0_SIGNAL_WORK_ITEM.CompletionStatus", completion_status, 0x280, 0x20, true, 0x5d16e3207f4300f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_D0_SIGNAL_WORK_ITEM.Scheduled", scheduled, 0x2a0, 0x8, true, 0x200d2f638690c03e)
#else
#define _m00
#define _m01
#define _m02
#endif