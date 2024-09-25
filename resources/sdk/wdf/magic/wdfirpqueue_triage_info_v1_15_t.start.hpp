#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_15.IrpQueueSize", irp_queue_size, 0x0, 0x0, false, 0xcb58d25877db77c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_15.IrpListHeader", irp_list_header, 0x0, 0x0, false, 0x44146c1bb77990b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_15.IrpListEntry", irp_list_entry, 0x0, 0x0, false, 0xc3ee81db58b58c4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_15.IrpContext", irp_context, 0x0, 0x0, false, 0x6a73bc4253e452bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif