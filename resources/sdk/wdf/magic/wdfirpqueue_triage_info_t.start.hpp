#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO.IrpQueueSize", irp_queue_size, 0x0, 0x20, true, 0x61ef8b741f279d0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO.IrpListHeader", irp_list_header, 0x20, 0x20, true, 0xe989bea3c7cc66ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO.IrpListEntry", irp_list_entry, 0x40, 0x20, true, 0xb91b41b32e00eff5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO.IrpContext", irp_context, 0x60, 0x20, true, 0xd99f5968250722ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif