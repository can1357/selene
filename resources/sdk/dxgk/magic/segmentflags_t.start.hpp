#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.Aperture", aperture, 0x0, 0x1, true, 0x3588331a00e91c09, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.Agp", agp, 0x1, 0x1, true, 0xffbb125b43a6afe8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.CpuVisible", cpu_visible, 0x2, 0x1, true, 0x899d7ce1a69e68a9, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.UseBanking", use_banking, 0x3, 0x1, true, 0xcda2910c42674689, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.CacheCoherent", cache_coherent, 0x4, 0x1, true, 0xe4dd974b52f6b704, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.PitchAlignment", pitch_alignment, 0x5, 0x1, true, 0x78a28ad7fe6a5e63, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.PopulatedFromSystemMemory", populated_from_system_memory, 0x6, 0x1, true, 0xbad6b9855b84cfeb, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.PreservedDuringStandby", preserved_during_standby, 0x7, 0x1, true, 0x1ffcffe36accc97e, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.PreservedDuringHibernate", preserved_during_hibernate, 0x8, 0x1, true, 0x4ba2fae1307db751, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.PartiallyPreservedDuringHibernate", partially_preserved_during_hibernate, 0x9, 0x1, true, 0x773a2ed0b9221e50, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.DirectFlip", direct_flip, 0xa, 0x1, true, 0x38a4778035170305, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.Use64KBPages", use64kb_pages, 0xb, 0x1, true, 0xcc24fbd23fd5aa04, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.ReservedSysMem", reserved_sys_mem, 0xc, 0x1, true, 0x3ab92ce24fc169ce, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.SupportsCpuHostAperture", supports_cpu_host_aperture, 0xd, 0x1, true, 0x99dd9c8c8781e6f9, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.SupportsCachedCpuHostAperture", supports_cached_cpu_host_aperture, 0xe, 0x1, true, 0x115cd92800d63844, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.ApplicationTarget", application_target, 0xf, 0x1, true, 0x47b380e05f10e844, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.VprSupported", vpr_supported, 0x10, 0x1, true, 0xacbdb3fe601d5d16, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.VprPreservedDuringStandby", vpr_preserved_during_standby, 0x11, 0x1, true, 0xe6016495e1af81c5, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.EncryptedPagingSupported", encrypted_paging_supported, 0x12, 0x1, true, 0x99b93287df906451, 1, uint32_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.LocalBudgetGroup", local_budget_group, 0x13, 0x1, true, 0x164a7cd153054ae3, 1, uint32_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SEGMENTFLAGS.NonLocalBudgetGroup", non_local_budget_group, 0x14, 0x1, true, 0x85dee36e158ebc06, 1, uint32_t)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTFLAGS.Value", value, 0x0, 0x20, true, 0xdf42ae22ac202181)
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
#endif