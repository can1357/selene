#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.Header", header, 0x0, 0x0, true, 0xa8d1ca8bc49ea220)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.PoolId", pool_id, 0x100, 0x40, true, 0x792934b8c5e45322)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.CurrentNode", current_node, 0x140, 0x20, true, 0x3348ef919c1be48d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.NextNode", next_node, 0x160, 0x20, true, 0xe64c802684648355)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.CurrentGroup", current_group, 0x180, 0x10, true, 0xb218e0fc963a3f3e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.NextGroup", next_group, 0x190, 0x10, true, 0x2015f17ad838e836)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.CurrentWorkerCount", current_worker_count, 0x1a0, 0x20, true, 0x478a825816e331b7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_WORKER_NUMANODE_SWITCH.NextWorkerCount", next_worker_count, 0x1c0, 0x20, true, 0x4cf231606f1228a2)
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