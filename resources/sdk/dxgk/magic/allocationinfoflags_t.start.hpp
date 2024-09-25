#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.CpuVisible", cpu_visible, 0x0, 0x1, true, 0x5e644e1c29bad4fc, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.PermanentSysMem", permanent_sys_mem, 0x1, 0x1, true, 0x37c7aa6526e22285, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.Cached", cached, 0x2, 0x1, true, 0x8820d6d6ea68621e, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.Protected", _protected, 0x3, 0x1, true, 0x61e13f5a77d1dd3b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.ExistingSysMem", existing_sys_mem, 0x4, 0x1, true, 0x3a65c13c49072c5f, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.ExistingKernelSysMem", existing_kernel_sys_mem, 0x5, 0x1, true, 0xca1323b962863a6e, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.FromEndOfSegment", from_end_of_segment, 0x6, 0x1, true, 0x73b403ab07e7f3e9, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.Swizzled", swizzled, 0x7, 0x1, true, 0xcc63c31baae2a83c, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.Overlay", overlay, 0x8, 0x1, true, 0x34616de68615ca40, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.Capture", capture, 0x9, 0x1, true, 0xde2769c625c7fdc4, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.UseAlternateVA", use_alternate_va, 0xa, 0x1, true, 0x78872473c4769da8, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.SynchronousPaging", synchronous_paging, 0xb, 0x1, true, 0x6d3931a603d615bc, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.LinkMirrored", link_mirrored, 0xc, 0x1, true, 0x2adc5e18244437ae, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.LinkInstanced", link_instanced, 0xd, 0x1, true, 0xc9875d6c0ee13753, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.HistoryBuffer", history_buffer, 0xe, 0x1, true, 0xd4cd2a6b1b4829da, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.AccessedPhysically", accessed_physically, 0xf, 0x1, true, 0x8ae7eca37c878a26, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.ExplicitResidencyNotification", explicit_residency_notification, 0x10, 0x1, true, 0xa00b786edf1e2e80, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.HardwareProtected", hardware_protected, 0x11, 0x1, true, 0xdd7bd60d5093a153, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.CpuVisibleOnDemand", cpu_visible_on_demand, 0x12, 0x1, true, 0xeb1f135c2bb62a0b, 1, uint32_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONINFOFLAGS.DXGK_ALLOC_RESERVED16", dxgk_alloc_reserved16, 0x13, 0x1, true, 0x3fd385e2536bf50b, 1, uint32_t)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFOFLAGS.Value", value, 0x0, 0x20, true, 0xcc23d87061ab0967)
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
#endif