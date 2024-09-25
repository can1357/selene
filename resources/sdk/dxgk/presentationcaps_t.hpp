#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentationcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRESENTATIONCAPS]
    // => WDK 10 (NV)
    //
    struct presentationcaps_t                               
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint1_t  no_screen_to_screen_blt;                //{ +0x0000@0  } | .NoScreenToScreenBlt
        _m01 uint1_t  no_overlap_screen_blt;                  //{ +0x0000@1  } | .NoOverlapScreenBlt
        _m02 uint1_t  support_kernel_mode_command_buffer;     //{ +0x0000@2  } | .SupportKernelModeCommandBuffer
        _m03 uint1_t  no_same_bitmap_alpha_blend;             //{ +0x0000@3  } | .NoSameBitmapAlphaBlend
        _m04 uint1_t  no_same_bitmap_stretch_blt;             //{ +0x0000@4  } | .NoSameBitmapStretchBlt
        _m05 uint1_t  no_same_bitmap_transparent_blt;         //{ +0x0000@5  } | .NoSameBitmapTransparentBlt
        _m06 uint1_t  no_same_bitmap_overlapped_alpha_blend;  //{ +0x0000@6  } | .NoSameBitmapOverlappedAlphaBlend
        _m07 uint1_t  no_same_bitmap_overlapped_stretch_blt;  //{ +0x0000@7  } | .NoSameBitmapOverlappedStretchBlt
        _m08 uint1_t  driver_supports_cdd_dwm_interop;        //{ +0x0000@8  } | .DriverSupportsCddDwmInterop
        _m09 uint4_t  alignment_shift;                        //{ +0x0000@10 } | .AlignmentShift
        _m10 uint3_t  max_texture_width_shift;                //{ +0x0000@14 } | .MaxTextureWidthShift
        _m11 uint3_t  max_texture_height_shift;               //{ +0x0000@17 } | .MaxTextureHeightShift
        _m12 uint1_t  support_all_blt_rops;                   //{ +0x0000@20 } | .SupportAllBltRops
        _m13 uint1_t  support_mirror_stretch_blt;             //{ +0x0000@21 } | .SupportMirrorStretchBlt
        _m14 uint1_t  support_mono_stretch_blt_modes;         //{ +0x0000@22 } | .SupportMonoStretchBltModes
        _m15 uint1_t  staging_rect_start_pitch_aligned;       //{ +0x0000@23 } | .StagingRectStartPitchAligned
        _m16 uint1_t  no_same_bitmap_bit_blt;                 //{ +0x0000@24 } | .NoSameBitmapBitBlt
        _m17 uint1_t  no_same_bitmap_overlapped_bit_blt;      //{ +0x0000@25 } | .NoSameBitmapOverlappedBitBlt
        _m18 uint1_t  no_temp_surface_for_clear_type_blend;   //{ +0x0000@27 } | .NoTempSurfaceForClearTypeBlend
        _m19 uint1_t  support_software_device_bitmaps;        //{ +0x0000@28 } | .SupportSoftwareDeviceBitmaps
        _m20 uint1_t  no_cache_coherent_aperture_memory;      //{ +0x0000@29 } | .NoCacheCoherentApertureMemory
        _m21 uint1_t  support_linear_heap;                    //{ +0x0000@30 } | .SupportLinearHeap
        _m22 uint32_t value;                                  //{ +0x0000    } | .Value
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_PRESENTATIONCAPS.$", 0x0, false, 0xecd879f2880e15c5 );                                      
        SDK_FIXED_SIZE( presentationcaps_t, 0x4 );                                      
    };                                                      
};
#include "magic/presentationcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::presentationcaps_t, 0x4 );
