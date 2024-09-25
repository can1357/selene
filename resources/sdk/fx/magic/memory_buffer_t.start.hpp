#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBuffer.m_Type", m_type, 0x40, 0x10, true, 0x27cbfe4b05f26f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBuffer.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xc779337dbc9e5d6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryBuffer.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x4748fa80d43de8c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryBuffer.m_Globals", m_globals, 0x80, 0x40, true, 0x88cd4f10e6547631)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBuffer.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x2fbf0a5991cfaa89)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x862abeb4cfc6d489, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x4cc23a3f8a3b62be, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xc5ab9f75a01c9e00, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x681b8ed45939605, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x66f8798ee0d5d477, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xfa961dd7aeda96d9, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xc3ee811f6320bed4, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xf1693d9fe156cc9, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBuffer.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xa09c72eeab714cbb, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryBuffer.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xc47ed37db136604a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBuffer.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x1e308a465292859d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBuffer.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xcae6dd17a644a88f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryBuffer.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x814fc3987407be73)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryBuffer.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x9cf5ea6d774d8695)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBuffer.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xdbbf3e38ce9eeac)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryBuffer.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x21bd007f2a28c414)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryBuffer.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xbd12131f0d1d38ff)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryBuffer.m_Device", m_device, 0x300, 0x40, true, 0x5763f6fd4dabbbb1)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryBuffer.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0xb49b09b432937293)
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