#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_17.IrpQueueSize", irp_queue_size, 0x0, 0x0, false, 0xd2cda93fce619878)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_17.IrpListHeader", irp_list_header, 0x0, 0x0, false, 0x8202f1ff97cda8f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_17.IrpListEntry", irp_list_entry, 0x0, 0x0, false, 0x1f85fa2c21938438)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRPQUEUE_TRIAGE_INFO_V1_17.IrpContext", irp_context, 0x0, 0x0, false, 0xcf9fc7a9c44088df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif