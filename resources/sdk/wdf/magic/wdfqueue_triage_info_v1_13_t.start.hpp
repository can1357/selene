#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.QueueSize", queue_size, 0x0, 0x0, false, 0xad854cfc13ace2b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.IrpQueue1", irp_queue1, 0x0, 0x0, false, 0x6b7d9e3501a5fe4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.IrpQueue2", irp_queue2, 0x0, 0x0, false, 0x27b225f1f3e06c07)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.RequestList1", request_list1, 0x0, 0x0, false, 0x51333540adf898e7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.RequestList2", request_list2, 0x0, 0x0, false, 0x940b8b371c9b12b3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.FwdProgressContext", fwd_progress_context, 0x0, 0x0, false, 0xcabca98e754bc7bb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_13.PkgIo", pkg_io, 0x0, 0x0, false, 0xaa506b1fd05d9afd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif