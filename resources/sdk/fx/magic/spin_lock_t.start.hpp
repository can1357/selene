#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSpinLock.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xd1ad02f85e57b174)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSpinLock.m_Type", m_type, 0x40, 0x10, true, 0x3cccdf29b95f4ba1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSpinLock.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x982feda884917cda)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSpinLock.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xb88c1c06c7702f50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxSpinLock.m_Globals", m_globals, 0x80, 0x40, true, 0xff030d8c0ef31017)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSpinLock.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x5b5123c724a5a1fe)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x7d1d36f5193edc7e, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa67213d6babede77, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x54a5a0502dbfe563, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf9047ad5236a1fba, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x663c7f212aa66ca1, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x30cf230252538c74, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x3c0b3d23d1d95188, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x964f13b05192790e, 1, uint16_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSpinLock.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x83b9a2de540aa230, 1, uint16_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxSpinLock.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xd600c346a93c9dcd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSpinLock.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x907689f53c439eb9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSpinLock.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xc162468221d0268a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxSpinLock.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x13522caf952298a7)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSpinLock.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x769106392b66704a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxSpinLock.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x17fa45ccfdd1477a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxSpinLock.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x34405eeb30843bde)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxSpinLock.m_Device", m_device, 0x300, 0x40, true, 0x675bf24d968772d2)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSpinLock.m_Irql", m_irql, 0x3c0, 0x8, true, 0xae24067197c33388)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSpinLock.m_InterruptLock", m_interrupt_lock, 0x3c8, 0x8, true, 0xdc2f5b211350c754)
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