#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.QueueSize", queue_size, 0x0, 0x0, false, 0x6cad07e0b0396919)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.IrpQueue1", irp_queue1, 0x0, 0x0, false, 0xac2d470eac2046cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.IrpQueue2", irp_queue2, 0x0, 0x0, false, 0xc5b1a7136d0ced6e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.RequestList1", request_list1, 0x0, 0x0, false, 0xda4db7c31d6775a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.RequestList2", request_list2, 0x0, 0x0, false, 0x1b5da434fdc055c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.FwdProgressContext", fwd_progress_context, 0x0, 0x0, false, 0x1cef7c4823e0844d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO_V1_11.PkgIo", pkg_io, 0x0, 0x0, false, 0x134bf39778671bc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif