#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResList.m_Type", m_type, 0x40, 0x10, true, 0x60f82e8257e093b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xebd3e3ba9a581ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoResList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x5466857485d24cf8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoResList.m_Globals", m_globals, 0x80, 0x40, true, 0xde1685984cfe02f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x5b751009e9134ea0)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xd2d6483db900ed5d, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x74f0191d995556a, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x98cbd9d1e0eba402, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xcd34ff178424cc78, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xad81e1d8416771f7, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x700d1450d26f6f7b, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xcfb95fb2453b8db6, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xad4ae9bb7cdb9cb7, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoResList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x432abcbae24929fb, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoResList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x9f249ea234c46521)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoResList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x233f2955783f42b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x380c1208e5554bcf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoResList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x8d1920f22877bd9f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoResList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x5c6ab668ad859db5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xa87a25f7b06958fb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoResList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xe0ae0a6b33a51129)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoResList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xa42dbfe4b7b76e94)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoResList.m_Device", m_device, 0x300, 0x40, true, 0xd779ae2ad273dec3)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoResList.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xf67a9e1ab441ba60)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoResList.m_Count", m_count, 0x3c0, 0x20, true, 0x483ab8c4da8593f4)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoResList.m_ListHead", m_list_head, 0x400, 0x80, true, 0xfcfdd9cea0ec05f5)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoResList.m_AccessFlags", m_access_flags, 0x480, 0x8, true, 0x507ec85c4c9c30a1)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoResList.m_Changed", m_changed, 0x488, 0x8, true, 0x7bdca1fae19bc9a4)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_res_req_list_t*), "FxIoResList.m_OwningList", m_owning_list, 0x4c0, 0x40, true, 0x1537c760f2821fb)
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
#endif