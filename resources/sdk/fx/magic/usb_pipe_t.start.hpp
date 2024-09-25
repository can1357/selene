#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbPipe.m_Type", m_type, 0x40, 0x10, true, 0x7ea9188232ecdb97)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbPipe.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x7d309b1d529316ed)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbPipe.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xc57f66d84c9b463a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxUsbPipe.m_Globals", m_globals, 0x80, 0x40, true, 0x2622935020c4f765)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbPipe.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x51b4f62798478598)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxUsbPipe.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x97929a5409f6b26f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbPipe.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xbea00273b41b1615)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbPipe.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2907311eaa16ce85)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbPipe.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xca0f300740c30145)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxUsbPipe.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x4a7d112f0cc98cfc)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbPipe.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xc818aee014f1b583)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxUsbPipe.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x26001237ec5f193f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxUsbPipe.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x1e8d6e2ab426c9ab)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxUsbPipe.m_Device", m_device, 0x300, 0x40, true, 0xec67ab578dbd9db)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbPipe.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x6fa26495e1d95d18)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxUsbPipe.m_TransactionedEntry", m_transactioned_entry, 0x3c0, 0x80, true, 0xf87dfe51d42f37e8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_InStack", m_in_stack, 0x540, 0x8, true, 0x8d2decd6f51c0aca)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_AddedToDeviceList", m_added_to_device_list, 0x548, 0x8, true, 0x1a69867ae30b9ca4)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbPipe.m_SentIoListHead", m_sent_io_list_head, 0x580, 0x80, true, 0x7e35aadd32131bf8)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbPipe.m_IgnoredIoListHead", m_ignored_io_list_head, 0x600, 0x80, true, 0xd7ef82fc88a64e22)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxUsbPipe.m_SentIoEvent", m_sent_io_event, 0x680, 0x0, true, 0x291632185b923b5d)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxUsbPipe.m_DisposeEvent", m_dispose_event, 0x780, 0x40, true, 0xcb0c2b958057314e)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxUsbPipe.m_PendedQueue", m_pended_queue, 0x7c0, 0x40, true, 0xe20c50f0bab4fa7e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxUsbPipe.m_Driver", m_driver, 0x900, 0x40, true, 0xc13c254de835ba39)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbPipe.m_InStackDevice", m_in_stack_device, 0x940, 0x40, true, 0xab3272107569a20f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbPipe.m_TargetDevice", m_target_device, 0x980, 0x40, true, 0x760cccf353fa9d03)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbPipe.m_TargetPdo", m_target_pdo, 0x9c0, 0x40, true, 0xe7589cc33400e568)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxUsbPipe.m_TargetFileObject", m_target_file_object, 0xa00, 0x40, true, 0x8830e1ed12f1e0f2)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_state_t), "FxUsbPipe.m_State", m_state, 0xa40, 0x20, true, 0x30229645cf2adfb)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbPipe.m_IoCount", m_io_count, 0xa60, 0x20, true, 0xdda325180a7e4f73)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxUsbPipe.m_TargetStackSize", m_target_stack_size, 0xa80, 0x8, true, 0x4292685a2318ab11)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_TargetIoType", m_target_io_type, 0xa88, 0x8, true, 0x1ac463da9518685)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_WaitingForSentIo", m_waiting_for_sent_io, 0xa90, 0x8, true, 0xc64a7d68d5a8670)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_Removing", m_removing, 0xa98, 0x8, true, 0x87202f3f0752e777)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbPipe.m_ListEntry", m_list_entry, 0xac0, 0x80, true, 0xc58f40a911261a03)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_device_t*), "FxUsbPipe.m_UsbDevice", m_usb_device, 0xb40, 0x40, true, 0x2ca0dd2679601c25)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_interface_t*), "FxUsbPipe.m_UsbInterface", m_usb_interface, 0xb80, 0x40, true, 0x975cceb4e488afea)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::usb_pipe_continuous_reader_t*), "FxUsbPipe.m_Reader", m_reader, 0xbc0, 0x40, true, 0xf4995ea2f1846578)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_pipe_information_t), "FxUsbPipe.m_PipeInformation", m_pipe_information, 0xc00, 0xc0, true, 0xec107eac75b0a5ba)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_InterfaceNumber", m_interface_number, 0xcc0, 0x8, true, 0x87d99b8cdfc66c7e)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipe.m_CheckPacketSize", m_check_packet_size, 0xcc8, 0x8, true, 0x640d0a9ca0213509)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x4c6553248d76f05a, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbPipe.m_USBDHandle", m_usbd_handle, 0xd00, 0x40, true, 0xc074152a6bbd7ebb)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::urb_type_t), "FxUsbPipe.m_UrbType", m_urb_type, 0xd40, 0x8, true, 0xbf6235cc57e1f20a)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x1ce4537cfba6508c, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x122e88dbcf51631c, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xed261f33884333d8, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x98de075149f7a395, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xb6df06a6595817ea, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xb8c67b40f6ccc65d, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xea73a787c1b454a4, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbPipe.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x337d99b24c7e2b25, 1, uint16_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m05
#define _m050
#define _m051
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif