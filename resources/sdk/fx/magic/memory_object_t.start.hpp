#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryObject.m_Type", m_type, 0x40, 0x10, true, 0x27a4ae60592ade1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x118c51dc2f903c39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x387cb2a43b7f4cc2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryObject.m_Globals", m_globals, 0x80, 0x40, true, 0xf77b0266eac492d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x60cbc93331eacca2)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x1d9f502461fbf235, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xead4326f73b7f092, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xb7c70f3d4b7330ec, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x73a51bafd8c89021, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x9d8faad93d6fbdb, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x5e2394d9219ff3ae, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xf5d4c0a05d3dc012, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd938ef6b9422d35c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6d5843f1bd53f80f, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x9414377195fdfb8e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x2fcfc1b086926fcd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xec096f0d6063c7bd)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x3aac455e758ee7e6)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x9b1357d6cb4a8f8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x7fff115f4e340c95)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x79b42ce74a477f35)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x81f9a486f851cf05)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryObject.m_Device", m_device, 0x300, 0x40, true, 0xaded26a1797d5641)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryObject.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x11766211cf1e3318)
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
#endif