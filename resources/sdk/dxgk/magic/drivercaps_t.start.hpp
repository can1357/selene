#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_DRIVERCAPS.HighestAcceptableAddress", highest_acceptable_address, 0x0, 0x40, true, 0x9c2703fb7861ffef)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxAllocationListSlotId", max_allocation_list_slot_id, 0x40, 0x20, true, 0xb965f5c34f1f0539)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DRIVERCAPS.ApertureSegmentCommitLimit", aperture_segment_commit_limit, 0x80, 0x40, true, 0x80fa2b6c9fdd3abc)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxPointerWidth", max_pointer_width, 0xc0, 0x20, true, 0xdf57362bddf7a60e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxPointerHeight", max_pointer_height, 0xe0, 0x20, true, 0xc50d7bb5df6b4292)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::pointerflags_t), "_DXGK_DRIVERCAPS.PointerCaps", pointer_caps, 0x100, 0x20, true, 0xdc4790294d2b164d)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.InterruptMessageNumber", interrupt_message_number, 0x120, 0x20, true, 0xf0d9245db211158b)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.NumberOfSwizzlingRanges", number_of_swizzling_ranges, 0x140, 0x20, true, 0x4babc7e3c44c7d5c)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxOverlays", max_overlays, 0x160, 0x20, true, 0x75029e48874033a9)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gammarampcaps_t), "_DXGK_DRIVERCAPS.GammaRampCaps", gamma_ramp_caps, 0x180, 0x20, true, 0x8ceae9bf70afc1d6)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::colortransformcaps_t), "_DXGK_DRIVERCAPS.ColorTransformCaps", color_transform_caps, 0x180, 0x20, true, 0x363894c0a13e58ef)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::presentationcaps_t), "_DXGK_DRIVERCAPS.PresentationCaps", presentation_caps, 0x1a0, 0x20, true, 0x7ffb3bd96ec37cc0)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxQueuedFlipOnVSync", max_queued_flip_on_v_sync, 0x1c0, 0x20, true, 0x2a23737a703a9436)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::flipcaps_t), "_DXGK_DRIVERCAPS.FlipCaps", flip_caps, 0x1e0, 0x20, true, 0x3c4be30017ac4a3c)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vidschcaps_t), "_DXGK_DRIVERCAPS.SchedulingCaps", scheduling_caps, 0x200, 0x20, true, 0xfee273d58a31d3d6)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vidmmcaps_t), "_DXGK_DRIVERCAPS.MemoryManagementCaps", memory_management_caps, 0x220, 0x40, true, 0x5a310cbf7d3e438a)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gpuenginetopology_t), "_DXGK_DRIVERCAPS.GpuEngineTopology", gpu_engine_topology, 0x260, 0x20, true, 0x66ff3bd07f8e6ce3)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::wddmversion_t), "_DXGK_DRIVERCAPS.WDDMVersion", wddm_version, 0xa80, 0x20, true, 0x80b87d073d91634)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::preemption_caps_t), "_DXGK_DRIVERCAPS.PreemptionCaps", preemption_caps, 0x1080, 0x40, true, 0x1a424873190442f1)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportNonVGA", support_non_vga, 0x10c0, 0x8, true, 0x1cea2e3c9c66f831)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportSmoothRotation", support_smooth_rotation, 0x10c8, 0x8, true, 0x1f18809e565e9c27)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportPerEngineTDR", support_per_engine_tdr, 0x10d0, 0x8, true, 0x883f414447b37631)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportDirectFlip", support_direct_flip, 0x10d8, 0x8, true, 0xa78933be39c673b)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportMultiPlaneOverlay", support_multi_plane_overlay, 0x10e0, 0x8, true, 0x5846cd84deb6537)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportRuntimePowerManagement", support_runtime_power_management, 0x10e8, 0x8, true, 0x6117140dfd323868)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportSurpriseRemovalInHibernation", support_surprise_removal_in_hibernation, 0x10f0, 0x8, true, 0xbaa8526e52f7efa0)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.HybridDiscrete", hybrid_discrete, 0x10f8, 0x8, true, 0x2b9365f7b6d053ad)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxOverlayPlanes", max_overlay_planes, 0x1100, 0x20, true, 0x169858f029dbb4f6)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.HybridIntegrated", hybrid_integrated, 0x1120, 0x8, true, 0x23bb9266455f5427)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DRIVERCAPS.InternalGpuVirtualAddressRangeStart", internal_gpu_virtual_address_range_start, 0x1140, 0x40, true, 0x4ba7ee5ca11969ef)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DRIVERCAPS.InternalGpuVirtualAddressRangeEnd", internal_gpu_virtual_address_range_end, 0x1180, 0x40, true, 0x1cb1eb0452c03f89)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportSurpriseRemoval", support_surprise_removal, 0x11c0, 0x8, true, 0xb38f9ee212676790)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.SupportMultiPlaneOverlayImmediateFlip", support_multi_plane_overlay_immediate_flip, 0x11c8, 0x8, true, 0x1db55cfaecc57b64)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.CursorScaledWithMultiPlaneOverlayPlane0", cursor_scaled_with_multi_plane_overlay_plane0, 0x11d0, 0x8, true, 0x321d6fed1309b66c)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DRIVERCAPS.HybridAcpiChainingRequired", hybrid_acpi_chaining_required, 0x11d8, 0x8, true, 0xfc2b84f1fe13bd94)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MaxQueuedMultiPlaneOverlayFlipVSync", max_queued_multi_plane_overlay_flip_v_sync, 0x11e0, 0x20, true, 0x29448c869ffa11e0)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_misc_caps_t), "_DXGK_DRIVERCAPS.MiscCaps", misc_caps, 0x1200, 0x20, true, 0xb73db98490cf0867)
#define _m36 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DRIVERCAPS.MiscCaps.SupportContextlessPresent", support_contextless_present, 0x0, 0x1, true, 0x1786349f7bb95bf6, 1, uint32_t)
#define _m37 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DRIVERCAPS.MiscCaps.Detachable", detachable, 0x1, 0x1, true, 0xa37e22f265dc21e0, 1, uint32_t)
#define _m38 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DRIVERCAPS.MiscCaps.VirtualGpuOnly", virtual_gpu_only, 0x2, 0x1, true, 0x801fd7a29e5864e8, 1, uint32_t)
#define _m39 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DRIVERCAPS.MiscCaps.ComputeOnly", compute_only, 0x3, 0x1, true, 0xba0c5fdc0f96c614, 1, uint32_t)
#define _m40 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DRIVERCAPS.MiscCaps.IndependentVidPnVSyncControl", independent_vid_pn_v_sync_control, 0x4, 0x1, true, 0xbc416d298d37fb0a, 1, uint32_t)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DRIVERCAPS.MiscCaps.Value", value, 0x0, 0x20, true, 0x73a0a50bd4684349)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m042
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#endif