#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbDevice.m_Type", m_type, 0x40, 0x10, true, 0x9ec045f040162eb2)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbDevice.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xdea8b064a247a5d7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbDevice.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xb30dff0c770e7a2a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxUsbDevice.m_Globals", m_globals, 0x80, 0x40, true, 0xd579a4dcbc205472)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbDevice.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x54435e69d2197397)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxUsbDevice.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xe48ef393a8c6671b)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbDevice.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4c839a2118361ec0)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbDevice.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x43aead5816281e5b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbDevice.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xa1641365f2407698)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxUsbDevice.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x99705f14d73c8b10)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbDevice.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x31cd157c7899d4cb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxUsbDevice.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x8a75c4ac141bf53)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxUsbDevice.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x5f8c4765e48c7d9f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxUsbDevice.m_Device", m_device, 0x300, 0x40, true, 0xc1d3e0163c5424de)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbDevice.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd25ee249f35fc745)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxUsbDevice.m_TransactionedEntry", m_transactioned_entry, 0x3c0, 0x80, true, 0x8acffe2ffa34ac0e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_InStack", m_in_stack, 0x540, 0x8, true, 0x99ec025fcd6f0884)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_AddedToDeviceList", m_added_to_device_list, 0x548, 0x8, true, 0x9386b891ef13502a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbDevice.m_SentIoListHead", m_sent_io_list_head, 0x580, 0x80, true, 0x7fba9bfdaaf2f223)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbDevice.m_IgnoredIoListHead", m_ignored_io_list_head, 0x600, 0x80, true, 0xc2ea12c053b00b47)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxUsbDevice.m_SentIoEvent", m_sent_io_event, 0x680, 0x0, true, 0x394ba473032ff0e3)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxUsbDevice.m_DisposeEvent", m_dispose_event, 0x780, 0x40, true, 0x73451f03cc58f8db)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxUsbDevice.m_PendedQueue", m_pended_queue, 0x7c0, 0x40, true, 0xccb9e9e78ce2f0a1)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxUsbDevice.m_Driver", m_driver, 0x900, 0x40, true, 0x18af04ac2bf5cf5)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbDevice.m_InStackDevice", m_in_stack_device, 0x940, 0x40, true, 0x37d82cbcf81eb66a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbDevice.m_TargetDevice", m_target_device, 0x980, 0x40, true, 0xd624fae00e3618f2)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbDevice.m_TargetPdo", m_target_pdo, 0x9c0, 0x40, true, 0xb2cc581e48afffaa)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxUsbDevice.m_TargetFileObject", m_target_file_object, 0xa00, 0x40, true, 0x7ae3364573781317)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_state_t), "FxUsbDevice.m_State", m_state, 0xa40, 0x20, true, 0x271b479f028510fe)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbDevice.m_IoCount", m_io_count, 0xa60, 0x20, true, 0x5e90834312db7541)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxUsbDevice.m_TargetStackSize", m_target_stack_size, 0xa80, 0x8, true, 0x69e1e0cde62c3aeb)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_TargetIoType", m_target_io_type, 0xa88, 0x8, true, 0x718930949cc1e811)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_WaitingForSentIo", m_waiting_for_sent_io, 0xa90, 0x8, true, 0xe089aee50c646ae7)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_Removing", m_removing, 0xa98, 0x8, true, 0x2b045888d225b7a5)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbDevice.m_USBDHandle", m_usbd_handle, 0xac0, 0x40, true, 0xfe3523c1ef5a152b)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbDevice.m_ControlPipe", m_control_pipe, 0xb00, 0x40, true, 0x15a48ff811446f3)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_interface_t**), "FxUsbDevice.m_Interfaces", m_interfaces, 0xb40, 0x40, true, 0x500ac9f90cb58bf7)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbDevice.m_ConfigHandle", m_config_handle, 0xb80, 0x40, true, 0x49ad382a15794e08)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_device_descriptor_t), "FxUsbDevice.m_DeviceDescriptor", m_device_descriptor, 0xbc0, 0x90, true, 0xdfe6d7b52504ed46)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "FxUsbDevice.m_ConfigDescriptor", m_config_descriptor, 0xc80, 0x40, true, 0x7218f3b79b4ea417)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "FxUsbDevice.m_UsbdVersionInformation", m_usbd_version_information, 0xcc0, 0x40, true, 0xe43edb9a5ddcbe2c)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x251a7a4e3e6c2c83, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "FxUsbDevice.m_QueryBusTime", m_query_bus_time, 0xd00, 0x40, true, 0xb58bcf61bb7a3dcf)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbDevice.m_BusInterfaceContext", m_bus_interface_context, 0xd40, 0x40, true, 0xc07f15bae54f52a3)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "FxUsbDevice.m_BusInterfaceDereference", m_bus_interface_dereference, 0xd80, 0x40, true, 0xc2cef3122afc879b)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxUsbDevice.m_InterfaceIterationLock", m_interface_iteration_lock, 0xdc0, 0x40, true, 0xf1e0734e649844bc)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxUsbDevice.m_HcdPortCapabilities", m_hcd_port_capabilities, 0xf00, 0x20, true, 0x2c9cef2c9454abac)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxUsbDevice.m_Traits", m_traits, 0xf20, 0x20, true, 0x477c6523876546a6)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_OnUSBD", m_on_usbd, 0xf40, 0x8, true, 0xd95a4f091d9babf3)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_NumInterfaces", m_num_interfaces, 0xf48, 0x8, true, 0x6f6fb0a0ba67f42a)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_MismatchedInterfacesInConfigDescriptor", m_mismatched_interfaces_in_config_descriptor, 0xf50, 0x8, true, 0x61061143a0d5d130)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::urb_type_t), "FxUsbDevice.m_UrbType", m_urb_type, 0xf58, 0x8, true, 0x71f3f087df7a9d50)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xce09697eb36f01a6, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbDevice.m_SspIsochPipeFlags", m_ssp_isoch_pipe_flags, 0x0, 0x0, false, 0x552244f2702b26c2)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x5f4198b5e4ccffc7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xc4fa06173de50bdb, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x6e8ac844e4617a28, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x9fe8bf441e6b72f7, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xd584afafdad30d1b, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x9e2f54f69b26a8d, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbDevice.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xdccbfdf993beff50, 1, uint16_t)
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
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m06
#define _m060
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif