#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.CpuVisible", cpu_visible, 0x0, 0x1, true, 0x7f2d63604fb98c28, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.PermanentSysMem", permanent_sys_mem, 0x1, 0x1, true, 0x35b09707dac2489d, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.Cached", cached, 0x2, 0x1, true, 0xbc56a3792d25d352, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.Protected", _protected, 0x3, 0x1, true, 0xf2483260024992c4, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.ExistingSysMem", existing_sys_mem, 0x4, 0x1, true, 0x14640b79a9296fb7, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.ExistingKernelSysMem", existing_kernel_sys_mem, 0x5, 0x1, true, 0xfce24f4795959779, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.FromEndOfSegment", from_end_of_segment, 0x6, 0x1, true, 0x4551db43219078f8, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.DisableLargePageMapping", disable_large_page_mapping, 0x7, 0x1, true, 0x2ad69ea6dfcc2609, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.Overlay", overlay, 0x8, 0x1, true, 0xc4f2b411ebb3c329, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.Capture", capture, 0x9, 0x1, true, 0xde5d3eb794963eeb, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.CreateInVpr", create_in_vpr, 0xa, 0x1, true, 0x49cdc094996ba53d, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.DXGK_ALLOC_RESERVED17", dxgk_alloc_reserved17, 0xb, 0x1, true, 0xfa78b3cec2d30450, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.HistoryBuffer", history_buffer, 0xe, 0x1, true, 0x640312d9d2a4edbc, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.AccessedPhysically", accessed_physically, 0xf, 0x1, true, 0x64998d0ad56bebca, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.ExplicitResidencyNotification", explicit_residency_notification, 0x10, 0x1, true, 0xf87a5bb31e91f5e9, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.HardwareProtected", hardware_protected, 0x11, 0x1, true, 0x854533563cffc37f, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.CpuVisibleOnDemand", cpu_visible_on_demand, 0x12, 0x1, true, 0xfeebab81c88054, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.DXGK_ALLOC_RESERVED16", dxgk_alloc_reserved16, 0x13, 0x1, true, 0x10c5e74688307f4a, 1, uint32_t)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0.Value", value, 0x0, 0x20, true, 0x6f8f4f349449cab3)
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
#endif