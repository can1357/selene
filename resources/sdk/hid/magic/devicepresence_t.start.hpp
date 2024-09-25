#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HID_DEVICEPRESENCE.SpinLock", spin_lock, 0x0, 0x40, true, 0x10b81368182335db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HID_DEVICEPRESENCE.Draining", draining, 0x40, 0x8, true, 0x21e8ef9be0535257)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HID_DEVICEPRESENCE.PdoIrpPendingList", pdo_irp_pending_list, 0x80, 0x80, true, 0xff7ad6ba9e678be6)
#else
#define _m00
#define _m01
#define _m02
#endif