#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DEVICE_OBJECT.Type", type, 0x0, 0x10, true, 0xdd6a8df62b67e2ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_OBJECT.Size", size, 0x10, 0x10, true, 0x64cef759a10ad892)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVICE_OBJECT.ReferenceCount", reference_count, 0x20, 0x20, true, 0xcd64b85762919a5a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_DEVICE_OBJECT.DriverObject", driver_object, 0x40, 0x40, true, 0x1c30128a174b0410)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_OBJECT.NextDevice", next_device, 0x80, 0x40, true, 0xb421a93a0c893328)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_OBJECT.AttachedDevice", attached_device, 0xc0, 0x40, true, 0x412a6cc9b56923ba)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_DEVICE_OBJECT.CurrentIrp", current_irp, 0x100, 0x40, true, 0x7e98ba078d4fa6f2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::timer_t*), "_DEVICE_OBJECT.Timer", timer, 0x140, 0x40, true, 0x5a201d47a28b6d62)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT.Flags", flags, 0x180, 0x20, true, 0x50dc44c07ecf4436)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT.Characteristics", characteristics, 0x1a0, 0x20, true, 0x9990ec01e5aa0d25)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_DEVICE_OBJECT.Vpb", vpb, 0x1c0, 0x40, true, 0x72a1a6f225e397a8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_OBJECT.DeviceExtension", device_extension, 0x200, 0x40, true, 0x130a8f4dc6f4a6df)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT.DeviceType", device_type, 0x240, 0x20, true, 0x57be8f80cc412ded)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DEVICE_OBJECT.StackSize", stack_size, 0x260, 0x8, true, 0xf49932f5537bef06)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_OBJECT.Queue.ListEntry", list_entry, 0x0, 0x80, true, 0x46f4564b33228a6)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::wait_context_block_t), "_DEVICE_OBJECT.Queue.Wcb", wcb, 0x0, 0x40, true, 0xc7416bfdcebd2857)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_queue_t), "_DEVICE_OBJECT.Queue", queue, 0x280, 0x40, true, 0xedf5fd94bfd814a)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT.AlignmentRequirement", alignment_requirement, 0x4c0, 0x20, true, 0x8860c0569b218a2)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdevice_queue_t), "_DEVICE_OBJECT.DeviceQueue", device_queue, 0x500, 0x40, true, 0x1662e5eef8a8e21c)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_DEVICE_OBJECT.Dpc", dpc, 0x640, 0x0, true, 0xdc1a72a515151531)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT.ActiveThreadCount", active_thread_count, 0x840, 0x20, true, 0x10648bd9ec3ad3de)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_OBJECT.SecurityDescriptor", security_descriptor, 0x880, 0x40, true, 0x99873cf4eda4c4e5)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_DEVICE_OBJECT.DeviceLock", device_lock, 0x8c0, 0xc0, true, 0xf5c124c2f5adb415)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_OBJECT.SectorSize", sector_size, 0x980, 0x10, true, 0x2bad89de93d4b03c)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devobj_extension_t*), "_DEVICE_OBJECT.DeviceObjectExtension", device_object_extension, 0x9c0, 0x40, true, 0xd4572bc408436810)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif