#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_CONTEXT.Signature", signature, 0x0, 0x20, true, 0x3037e5a797a4aaba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_CONTEXT.WaitEndTimeIn100NS", wait_end_time_in100ns, 0x40, 0x40, true, 0x3029cc65b7b6f293)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STORPORT_CONTEXT.OldContext", old_context, 0x80, 0x40, true, 0x269bc62b20b69a0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_STORPORT_CONTEXT.QueueEntry", queue_entry, 0xc0, 0x80, true, 0x1faacb9faa96c8cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_STORPORT_CONTEXT.Irp", irp, 0x140, 0x40, true, 0x9604a49fd4dbdb55)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_extension_t*), "_STORPORT_CONTEXT.Unit", unit, 0x180, 0x40, true, 0x3ddc99b67e5aa9ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif