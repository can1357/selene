#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResReqList.m_Type", m_type, 0x40, 0x10, true, 0x612e0cfc6f9b6d64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResReqList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x13bd20815e46c00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoResReqList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xdac33c1375062a05)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoResReqList.m_Globals", m_globals, 0x80, 0x40, true, 0xda37eda8d5748afb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResReqList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xb8d448e766cf8df7)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xa263be61032c3b4f, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x74fc211eb1845b47, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xee8edad026c4ecc9, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x91f34494981ed1eb, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x63850a84d8fa01aa, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x978ee4bd0d07174e, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x8b2efc3f10acdea, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x2f6973aadfe5e6e7, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResReqList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xb71101458e1a6186, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoResReqList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x1d474b820083a2b5)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResReqList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xbc6bcde3fd7de488)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResReqList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x704198a6e46ab520)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoResReqList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x4dab5b9825396cb9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoResReqList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x58a2408f9c86a016)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResReqList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x259a9095a281d9e6)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoResReqList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xc5f85c0cbed12c77)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoResReqList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x74c3ae03fba2538d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoResReqList.m_Device", m_device, 0x300, 0x40, true, 0xcf6e749464976bc0)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoResReqList.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x2ebcc6296251beec)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoResReqList.m_Count", m_count, 0x3c0, 0x20, true, 0x50338d79042de9bc)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResReqList.m_ListHead", m_list_head, 0x400, 0x80, true, 0x16a59fe44f2fd6e0)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoResReqList.m_AccessFlags", m_access_flags, 0x480, 0x8, true, 0xdbec0d7fee66d3e1)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoResReqList.m_Changed", m_changed, 0x488, 0x8, true, 0x5b9df4264e03d4ae)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoResReqList.m_SlotNumber", m_slot_number, 0x4c0, 0x20, true, 0x8715c52f1b3422a3)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "FxIoResReqList.m_InterfaceType", m_interface_type, 0x4e0, 0x20, true, 0x3a37357fa7532b7c)
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
#endif