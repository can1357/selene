#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIAGE_9F_PNP.Signature", signature, 0x0, 0x10, true, 0xa46cb971da5224c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRIAGE_9F_PNP.Revision", revision, 0x10, 0x10, true, 0x787e209fef1673e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_pnp_device_completion_queue_t*), "_TRIAGE_9F_PNP.CompletionQueue", completion_queue, 0x40, 0x40, true, 0xcde8b94ff240bb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_ex_work_queue_t*), "_TRIAGE_9F_PNP.DelayedWorkQueue", delayed_work_queue, 0x80, 0x40, true, 0xab62ea44c4a5401)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_ex_work_queue_t*), "_TRIAGE_9F_PNP.DelayedIoWorkQueue", delayed_io_work_queue, 0xc0, 0x40, true, 0x31640e2853da85bf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif