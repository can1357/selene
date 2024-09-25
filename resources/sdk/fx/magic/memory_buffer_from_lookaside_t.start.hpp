#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromLookaside.m_Type", m_type, 0x40, 0x10, true, 0x31fb1af799490a1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromLookaside.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x970d08f49d2aee15)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryBufferFromLookaside.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x6e6db592ce77d897)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryBufferFromLookaside.m_Globals", m_globals, 0x80, 0x40, true, 0xac30307d03ee30cc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromLookaside.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x188fcc449f1b5212)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xc25be12c5b947329, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd798685191bfd8d4, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xba4b26f78a1d8bd0, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xa384a4b356f86839, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xfffb53ae01308475, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xd7f614178568a3c0, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x3fb1091ffa921348, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x759cfa69b8569436, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x1957a102488dd820, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryBufferFromLookaside.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xbceda31e078ba6b1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromLookaside.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x19a134515402ffc0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromLookaside.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x6cfa1f719c7cf20f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryBufferFromLookaside.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xa14b377bf031e8e9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryBufferFromLookaside.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xe027951ad9125315)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromLookaside.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x99afd1c54de9516f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryBufferFromLookaside.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x50a56cc8112540b5)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryBufferFromLookaside.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xac8f913b12758f0b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryBufferFromLookaside.m_Device", m_device, 0x300, 0x40, true, 0x4d89777a7e331ff7)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryBufferFromLookaside.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x519b71cc205ff76e)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::lookaside_list_t*), "FxMemoryBufferFromLookaside.m_pLookaside", m_p_lookaside, 0x3c0, 0x40, true, 0xda12da9c48a8b00)
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