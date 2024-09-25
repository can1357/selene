#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DEVICERESET.Enabled", enabled, 0x0, 0x8, true, 0xcbc8eb0919f15d40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HID_DEVICERESET.SpinLock", spin_lock, 0x40, 0x40, true, 0x9027b260b95a0e9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DEVICERESET.Draining", draining, 0x80, 0x8, true, 0x20df2b2fd5d28720)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HID_DEVICERESET.PdoIrpPendingList", pdo_irp_pending_list, 0xc0, 0x80, true, 0x4d4b33aa37db4367)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_HID_DEVICERESET.FdoIrp", fdo_irp, 0x140, 0x40, true, 0x68d09d8d1263a938)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif