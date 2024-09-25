#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.QueueSize", queue_size, 0x0, 0x20, true, 0xeced1c577b56e0ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.IrpQueue1", irp_queue1, 0x20, 0x20, true, 0x9febd1bda2538d23)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.IrpQueue2", irp_queue2, 0x40, 0x20, true, 0x72d8f8f7a990a664)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.RequestList1", request_list1, 0x60, 0x20, true, 0x477271ed0cbb5d5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.RequestList2", request_list2, 0x80, 0x20, true, 0xedd63ff47eb83dbe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.FwdProgressContext", fwd_progress_context, 0xa0, 0x20, true, 0x68b0867e2a9c0e10)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFQUEUE_TRIAGE_INFO.PkgIo", pkg_io, 0xc0, 0x20, true, 0xc13005ba3e159ff4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif