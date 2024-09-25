#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoScreenToScreenBlt", no_screen_to_screen_blt, 0x0, 0x1, true, 0xe3000902534ad981, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoOverlapScreenBlt", no_overlap_screen_blt, 0x1, 0x1, true, 0xe414e34ffc8b80d, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportKernelModeCommandBuffer", support_kernel_mode_command_buffer, 0x2, 0x1, true, 0x29b84e6228104dc5, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapAlphaBlend", no_same_bitmap_alpha_blend, 0x3, 0x1, true, 0x1933b79a7517c53d, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapStretchBlt", no_same_bitmap_stretch_blt, 0x4, 0x1, true, 0xbbdda7646921accc, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapTransparentBlt", no_same_bitmap_transparent_blt, 0x5, 0x1, true, 0x29235f30dc62373e, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapOverlappedAlphaBlend", no_same_bitmap_overlapped_alpha_blend, 0x6, 0x1, true, 0x1703ebf52e2fea7, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapOverlappedStretchBlt", no_same_bitmap_overlapped_stretch_blt, 0x7, 0x1, true, 0x5f7744379681dba9, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.DriverSupportsCddDwmInterop", driver_supports_cdd_dwm_interop, 0x8, 0x1, true, 0xbf5dd527ac7c8674, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_DXGK_PRESENTATIONCAPS.AlignmentShift", alignment_shift, 0xa, 0x4, true, 0xaa866da8a50a5453, 4, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXGK_PRESENTATIONCAPS.MaxTextureWidthShift", max_texture_width_shift, 0xe, 0x3, true, 0xd9ea669fc7aed09d, 3, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXGK_PRESENTATIONCAPS.MaxTextureHeightShift", max_texture_height_shift, 0x11, 0x3, true, 0xf3504c2522324e21, 3, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportAllBltRops", support_all_blt_rops, 0x14, 0x1, true, 0xe5bd9f85db980d3d, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportMirrorStretchBlt", support_mirror_stretch_blt, 0x15, 0x1, true, 0xbdeea185b0a9a858, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportMonoStretchBltModes", support_mono_stretch_blt_modes, 0x16, 0x1, true, 0x23a0e056d70e7420, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.StagingRectStartPitchAligned", staging_rect_start_pitch_aligned, 0x17, 0x1, true, 0x6183312eeee8c61e, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapBitBlt", no_same_bitmap_bit_blt, 0x18, 0x1, true, 0x69ba5fd0de13e594, 1, uint32_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoSameBitmapOverlappedBitBlt", no_same_bitmap_overlapped_bit_blt, 0x19, 0x1, true, 0x81e5c17d2d6fea2f, 1, uint32_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoTempSurfaceForClearTypeBlend", no_temp_surface_for_clear_type_blend, 0x1b, 0x1, true, 0xaba9e0ba16109edc, 1, uint32_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportSoftwareDeviceBitmaps", support_software_device_bitmaps, 0x1c, 0x1, true, 0xbdd31314fe904c44, 1, uint32_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.NoCacheCoherentApertureMemory", no_cache_coherent_aperture_memory, 0x1d, 0x1, true, 0x4bf0b08b55eb7c89, 1, uint32_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTATIONCAPS.SupportLinearHeap", support_linear_heap, 0x1e, 0x1, true, 0x91fe16d58875e6d, 1, uint32_t)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRESENTATIONCAPS.Value", value, 0x0, 0x20, true, 0x25c503fa5070d9e4)
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
#endif