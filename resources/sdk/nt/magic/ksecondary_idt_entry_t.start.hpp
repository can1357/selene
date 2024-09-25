#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSECONDARY_IDT_ENTRY.SpinLock", spin_lock, 0x0, 0x40, true, 0x49fbba1beb653d6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KSECONDARY_IDT_ENTRY.ConnectLock", connect_lock, 0x40, 0xc0, true, 0x625b68dcf59a3fb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSECONDARY_IDT_ENTRY.LineMasked", line_masked, 0x100, 0x8, true, 0x933dda4cb46dfff2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_KSECONDARY_IDT_ENTRY.InterruptList", interrupt_list, 0x140, 0x40, true, 0x970d71c0d66b69fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif