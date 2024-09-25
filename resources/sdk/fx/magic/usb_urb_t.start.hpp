#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbUrb.m_Type", m_type, 0x40, 0x10, true, 0xdf643777b2b4e22a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbUrb.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x3c253cb0a87cd032)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsbUrb.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xaa4516208cc28f50)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxUsbUrb.m_Globals", m_globals, 0x80, 0x40, true, 0xffded7f37d42eed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbUrb.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x3fe24b42dd7e5d2)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x67a08086c7325b2f, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x83365202f0ab1fca, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xb29ee93bd605f4a2, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x73104417d7efe01f, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xf41007ae7ef424b9, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x281f7edfaee044c, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xf65b5fe7d270d207, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x40679c8ccce318d8, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUsbUrb.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xc53c0bdb572d1b03, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxUsbUrb.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xb3eee2101ce78406)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUsbUrb.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xcbe192dbfe574883)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbUrb.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x81930f8add9d5d8e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUsbUrb.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x79360ccbb5fb1bd3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxUsbUrb.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x315aba9d9dbf8e34)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUsbUrb.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x8931411008acda6d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxUsbUrb.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x5c127b04d0105083)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxUsbUrb.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x62bfd1935ceb70bc)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxUsbUrb.m_Device", m_device, 0x300, 0x40, true, 0xe396eabb5aa3108d)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxUsbUrb.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0xbe60afe4973cd544)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbUrb.m_pBuffer", m_p_buffer, 0x3c0, 0x40, true, 0xabdb04c51069a9cd)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_handle_t*), "FxUsbUrb.m_USBDHandle", m_usbd_handle, 0x400, 0x40, true, 0x4b12e0396018b984)
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
#endif