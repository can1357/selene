#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.QueueSize", queue_size, 0x0, 0x0, false, 0x46d9d6dd68c8aeb7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.IrpQueue1", irp_queue1, 0x0, 0x0, false, 0xdefa4d7927be3f54)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.IrpQueue2", irp_queue2, 0x0, 0x0, false, 0x24a9c2fb5a1d0b17)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.RequestList1", request_list1, 0x0, 0x0, false, 0xaaa81d75e5c8e86b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.RequestList2", request_list2, 0x0, 0x0, false, 0xe01e4c39795fe564)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.FwdProgressContext", fwd_progress_context, 0x0, 0x0, false, 0x4284213ca1f1f2ac)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_15.PkgIo", pkg_io, 0x0, 0x0, false, 0xb5b0e220ab1bf293)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif