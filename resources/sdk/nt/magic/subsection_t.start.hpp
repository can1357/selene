#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_SUBSECTION.ControlArea", control_area, 0x0, 0x40, true, 0xbe22bfa30daae7e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_SUBSECTION.SubsectionBase", subsection_base, 0x40, 0x40, true, 0x31e89134de16fbf6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::subsection_t*), "_SUBSECTION.NextSubsection", next_subsection, 0x80, 0x40, true, 0x373dffe2959e0fc5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_SUBSECTION.GlobalPerSessionHead", global_per_session_head, 0xc0, 0x40, true, 0x21765fbf6f918b05)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::control_area_wait_block_t*), "_SUBSECTION.CreationWaitList", creation_wait_list, 0xc0, 0x40, true, 0xe455e321b921b67b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::per_session_protos_t*), "_SUBSECTION.SessionDriverProtos", session_driver_protos, 0xc0, 0x40, true, 0xc0b324579962394e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.LongFlags", long_flags, 0x100, 0x20, true, 0x5eee5269d9f7fb9d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsubsection_flags_t), "_SUBSECTION.SubsectionFlags", subsection_flags, 0x100, 0x20, true, 0x8f470899610d9fa8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.StartingSector", starting_sector, 0x120, 0x20, true, 0xa3d41babc3809667)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.NumberOfFullSectors", number_of_full_sectors, 0x140, 0x20, true, 0x4acf9abbc58b0846)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.PtesInSubsection", ptes_in_subsection, 0x160, 0x20, true, 0xa6a60f1e1d6b4d73)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_SUBSECTION.UnusedPtes", unused_ptes, 0x1a0, 0x1e, true, 0x1b8e5ef03f760174, 0, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUBSECTION.DirtyPages", dirty_pages, 0x1bf, 0x1, true, 0x92c920787bde1c29, 1, uint32_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::subsection_entry1_t), "_SUBSECTION.e1", e1, 0x180, 0x20, true, 0x8ee66fdebe5a6685)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.EntireField", entire_field, 0x180, 0x20, true, 0xcb309f6552edfa89)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUBSECTION.ExtentQueryNeeded", extent_query_needed, 0x1be, 0x1, true, 0x75d8362607c042c2, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUBSECTION.NumberOfChildViews", number_of_child_views, 0x0, 0x0, false, 0x58d1f2f1da66ebb4)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_SUBSECTION.u2.AlignmentNoAccessPtes", alignment_no_access_ptes, 0x0, 0x0, false, 0xe78dab54023d26f6, 31, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SUBSECTION.u2.DirtyPages", dirty_pages, 0x0, 0x0, false, 0x706c281b38824a40, 1, uint32_t)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u2_t), "_SUBSECTION.u2", u2, 0x0, 0x0, false, 0x918e5c7b4be6fe9a)
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
#endif