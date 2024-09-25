#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_13.IrpQueueSize", irp_queue_size, 0x0, 0x0, false, 0x31e3932bd153dbfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_13.IrpListHeader", irp_list_header, 0x0, 0x0, false, 0x68dfe87668864712)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_13.IrpListEntry", irp_list_entry, 0x0, 0x0, false, 0x8bc7ca309f0fa2ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_13.IrpContext", irp_context, 0x0, 0x0, false, 0x1dde40db7ecddcea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif