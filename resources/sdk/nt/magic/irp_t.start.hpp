#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_IRP.Type", type, 0x0, 0x10, true, 0xe460265877cb4b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IRP.Size", size, 0x10, 0x10, true, 0xa3f096eafe866d20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_IRP.MdlAddress", mdl_address, 0x40, 0x40, true, 0x445d881504c0ea44)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IRP.Flags", flags, 0x80, 0x20, true, 0x9847f58491ffdea5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IRP.AssociatedIrp.MasterIrp", master_irp, 0x0, 0x40, true, 0xf5326139b8c25294)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IRP.AssociatedIrp.IrpCount", irp_count, 0x0, 0x20, true, 0x20edc4b6325c6726)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.AssociatedIrp.SystemBuffer", system_buffer, 0x0, 0x40, true, 0xa0d4847f3f1d7ba1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_associated_irp_t), "_IRP.AssociatedIrp", associated_irp, 0xc0, 0x40, true, 0xcf98abc01392c24b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IRP.ThreadListEntry", thread_list_entry, 0x100, 0x80, true, 0x1cfa08c22fab1f33)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_IRP.IoStatus", io_status, 0x180, 0x80, true, 0xc4e60c1393421047)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_IRP.RequestorMode", requestor_mode, 0x200, 0x8, true, 0x46b5e6f7dbf37ecf)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP.PendingReturned", pending_returned, 0x208, 0x8, true, 0xafe47c2307e063cb)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_IRP.StackCount", stack_count, 0x210, 0x8, true, 0xd77fa29add5de052)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_IRP.CurrentLocation", current_location, 0x218, 0x8, true, 0xa20dc6686827b79)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP.Cancel", cancel, 0x220, 0x8, true, 0xe80c00cc2b3fa986)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP.CancelIrql", cancel_irql, 0x228, 0x8, true, 0x9e19e1c749144e96)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_IRP.ApcEnvironment", apc_environment, 0x230, 0x8, true, 0xe90b8453cbddbe0b)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IRP.AllocationFlags", allocation_flags, 0x238, 0x8, true, 0xccc5492657c740f9)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::status_block_t*), "_IRP.UserIosb", user_iosb, 0x240, 0x40, true, 0x79aae3663c688d5a)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_IRP.UserEvent", user_event, 0x280, 0x40, true, 0x556fa88e699de83f)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pio_apc_routine_t ), "_IRP.Overlay.AsynchronousParameters.UserApcRoutine", user_apc_routine, 0x0, 0x40, true, 0xf44478ba781e8ccc)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.Overlay.AsynchronousParameters.IssuingProcess", issuing_process, 0x0, 0x40, true, 0x3bf0055378c8a978)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.Overlay.AsynchronousParameters.UserApcContext", user_apc_context, 0x40, 0x40, true, 0x962b1d5e1045419c)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ioring_object_t*), "_IRP.Overlay.AsynchronousParameters.IoRing", io_ring, 0x40, 0x40, true, 0x5e0493393cf17527)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_asynchronous_parameters_t), "_IRP.Overlay.AsynchronousParameters", asynchronous_parameters, 0x0, 0x80, true, 0x2297594ee8938e74)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IRP.Overlay.AllocationSize", allocation_size, 0x0, 0x40, true, 0xbce82a81009410ae)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_overlay_t), "_IRP.Overlay", overlay, 0x2c0, 0x80, true, 0x7587e7fd5fd2e785)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*)>*), "_IRP.CancelRoutine", cancel_routine, 0x340, 0x40, true, 0x20d067b51db31acf)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.UserBuffer", user_buffer, 0x380, 0x40, true, 0xba6e1007b09a4f52)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdevice_queue_entry_t), "_IRP.Tail.Overlay.DeviceQueueEntry", device_queue_entry, 0x0, 0xc0, true, 0xebd55a24e488941e)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_IRP.Tail.Overlay.DriverContext", driver_context, 0x0, 0x0, true, 0xc5ff0487cb3772c2)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_IRP.Tail.Overlay.Thread", thread, 0x100, 0x40, true, 0xe53414c2cd5ebf50)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_IRP.Tail.Overlay.AuxiliaryBuffer", auxiliary_buffer, 0x140, 0x40, true, 0xa4568c02dced089a)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_IRP.Tail.Overlay.ListEntry", list_entry, 0x180, 0x80, true, 0xf54bcd1e057c57d1)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::stack_location_t*), "_IRP.Tail.Overlay.CurrentStackLocation", current_stack_location, 0x200, 0x40, true, 0x6bf5ac50b382acde)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IRP.Tail.Overlay.PacketType", packet_type, 0x200, 0x20, true, 0xe0d18213f4c8c1e5)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_IRP.Tail.Overlay.OriginalFileObject", original_file_object, 0x240, 0x40, true, 0x5697c3e4b2d004f3)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.Tail.Overlay.IrpExtension", irp_extension, 0x280, 0x40, true, 0x2258661bc519efc8)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_overlay_t), "_IRP.Tail.Overlay", overlay, 0x0, 0xc0, true, 0x5062ce075234984e)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kapc_t), "_IRP.Tail.Apc", apc, 0x0, 0xc0, true, 0x91d606a469ac8e2)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.Tail.CompletionKey", completion_key, 0x0, 0x40, true, 0x35cb83cd3d8efc67)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_tail_t), "_IRP.Tail", tail, 0x3c0, 0xc0, true, 0x2b2db5eb05fd2259)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IRP.AllocationProcessorNumber", allocation_processor_number, 0x20, 0x10, true, 0x909fdf3dc9e87729)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IRP.IoRingContext", io_ring_context, 0x240, 0x40, true, 0x6fbe5730871dbd9f)
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
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#endif