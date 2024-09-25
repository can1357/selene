#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.QueueSize", queue_size, 0x0, 0x0, false, 0x4479148fb9747908)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.IrpQueue1", irp_queue1, 0x0, 0x0, false, 0xefdb6edd3b0bd5ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.IrpQueue2", irp_queue2, 0x0, 0x0, false, 0xb72eca7d910368d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.RequestList1", request_list1, 0x0, 0x0, false, 0xcd6268e5bb690b66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.RequestList2", request_list2, 0x0, 0x0, false, 0xa38d6e4bf3efd9f4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.FwdProgressContext", fwd_progress_context, 0x0, 0x0, false, 0xe23d1307936ac34e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_17.PkgIo", pkg_io, 0x0, 0x0, false, 0xf7461fa414f53c0d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif