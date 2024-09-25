#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbInterface.m_Type", m_type, 0x40, 0x10, true, 0xaac44a0dfa7fec60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbInterface.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x3db6b6e2bd822c33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbInterface.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xb2ab896c9aa70555)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxUsbInterface.m_Globals", m_globals, 0x80, 0x40, true, 0x4dee2d709bd49fb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbInterface.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x4c3b577eec11c035)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x9ae179d44eb64e6e, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x7b3d16003838577e, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xe920ad5adeba91cf, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x4457af2782619182, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2e2b99c8ca74ae34, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x4d43bf9c9dd74e53, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x9736671b0f9419ab, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x42b33d24dbbe7f13, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbInterface.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x72d2309d6a72f74b, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxUsbInterface.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x53bda34e68995675)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbInterface.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x9b8620d4f5a640a3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbInterface.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xcc0846045cee7780)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbInterface.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x116db1f6ffb6cd33)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxUsbInterface.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xbd1421f4943663f9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbInterface.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x8a86d4396243f60)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxUsbInterface.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf8d358cb6a56ab74)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxUsbInterface.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x2c00703016038996)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxUsbInterface.m_Device", m_device, 0x300, 0x40, true, 0x583300cc30922d22)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbInterface.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x23b4ab85609b0d9)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_device_t*), "FxUsbInterface.m_UsbDevice", m_usb_device, 0x3c0, 0x40, true, 0x21523b0f785cf845)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_pipe_t**), "FxUsbInterface.m_ConfiguredPipes", m_configured_pipes, 0x400, 0x40, true, 0xc6b5e2a0c92991c9)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::usb_interface_setting_t*), "FxUsbInterface.m_Settings", m_settings, 0x440, 0x40, true, 0x68fa0498eb8f58d0)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_NumSettings", m_num_settings, 0x480, 0x8, true, 0x345c1f6c518b0678)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_NumberOfConfiguredPipes", m_number_of_configured_pipes, 0x488, 0x8, true, 0xfb3f4bd65da508a)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_InterfaceNumber", m_interface_number, 0x490, 0x8, true, 0x155f40791937e3fb)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_CurAlternateSetting", m_cur_alternate_setting, 0x498, 0x8, true, 0xaf912e58c4a72ce3)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_Class", m_class, 0x4a0, 0x8, true, 0x18aef5ba5f3b221b)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_SubClass", m_sub_class, 0x4a8, 0x8, true, 0x17217185da24dd4b)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbInterface.m_Protocol", m_protocol, 0x4b0, 0x8, true, 0x1cab751ebd1bcd9c)
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
#endif