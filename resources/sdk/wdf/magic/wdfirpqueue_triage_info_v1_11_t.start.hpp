#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_11.IrpQueueSize", irp_queue_size, 0x0, 0x0, false, 0x1ea1abb47fdcb97b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_11.IrpListHeader", irp_list_header, 0x0, 0x0, false, 0xb2cc997f069c6278)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_11.IrpListEntry", irp_list_entry, 0x0, 0x0, false, 0x546738148070d7f1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_11.IrpContext", irp_context, 0x0, 0x0, false, 0x8a16241d093a5369)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif