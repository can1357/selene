#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_DPC_WORK_ITEM.WorkItem", work_item, 0x0, 0x0, false, 0xe662e2efc8fd0683)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_NDIS_DPC_WORK_ITEM.Dpc", dpc, 0x0, 0x0, false, 0xbb9e6f7c1bb1b9b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DPC_WORK_ITEM.InterruptContext", interrupt_context, 0x0, 0x0, false, 0x5194b3c47685a2ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DPC_WORK_ITEM.SystemArgument1", system_argument1, 0x0, 0x0, false, 0x34bfc6660e5d0c5e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_DPC_WORK_ITEM.SystemArgument2", system_argument2, 0x0, 0x0, false, 0xd86cf96ab7db7730)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_DPC_WORK_ITEM.TargetCpu", target_cpu, 0x0, 0x0, false, 0x8a25645bc973c7ff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_DPC_WORK_ITEM.Flags", flags, 0x0, 0x0, false, 0x8aecb15280451b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_DPC_WORK_ITEM.Lock", lock, 0x0, 0x0, false, 0x7a8a21563cc379f2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif