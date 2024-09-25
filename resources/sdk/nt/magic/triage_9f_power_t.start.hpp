#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIAGE_9F_POWER.Signature", signature, 0x0, 0x10, true, 0x903655b78c7c5e9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIAGE_9F_POWER.Revision", revision, 0x10, 0x10, true, 0x8219aadc0dc5ac29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_TRIAGE_9F_POWER.IrpList", irp_list, 0x40, 0x40, true, 0xfb81d1f17742362c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_TRIAGE_9F_POWER.ThreadList", thread_list, 0x80, 0x40, true, 0xc54934b9f5bf6a45)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_ex_work_queue_t*), "_TRIAGE_9F_POWER.DelayedWorkQueue", delayed_work_queue, 0xc0, 0x40, true, 0x10b9160145ac623b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_ex_work_queue_t*), "_TRIAGE_9F_POWER.DelayedIoWorkQueue", delayed_io_work_queue, 0x100, 0x40, true, 0x6dbe0e17d8c8403)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif