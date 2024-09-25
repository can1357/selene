#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_IRP_WORKER_ENTRY.Link", link, 0x0, 0x80, true, 0x33322b110dc92140)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_POP_IRP_WORKER_ENTRY.Thread", thread, 0x80, 0x40, true, 0xf643e915d35547b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_IRP_WORKER_ENTRY.Irp", irp, 0xc0, 0x40, true, 0xc9691c6276b09c0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_IRP_WORKER_ENTRY.Device", device, 0x100, 0x40, true, 0xa13f81626b564a04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_WORKER_ENTRY.Static", _static, 0x140, 0x8, true, 0xa47a8e4e80f57d34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif