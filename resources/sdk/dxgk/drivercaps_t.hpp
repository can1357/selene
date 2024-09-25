#pragma once
#include <sdkgen/support_library.hpp>
#include "flipcaps_t.hpp"
#include "vidmmcaps_t.hpp"
#include "vidschcaps_t.hpp"
#include "wddmversion_t.hpp"
#include "pointerflags_t.hpp"
#include "gammarampcaps_t.hpp"
#include "presentationcaps_t.hpp"
#include "gpuenginetopology_t.hpp"
#include "colortransformcaps_t.hpp"
#include "../d3dk/mdt/preemption_caps_t.hpp"

#include "magic/drivercaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DRIVERCAPS]
    // => WDK 10 (NV)
    //
    struct drivercaps_t                                                                                   
    {                                                                                                     
        union u0_misc_caps_t                                                                              
        {                                                                                                 
            // WDK 10                                                                                     
            //                                                                                            
            _m36 uint1_t  support_contextless_present;                                                      //{ +0x0000@0  } | .SupportContextlessPresent
            _m37 uint1_t  detachable;                                                                       //{ +0x0000@1  } | .Detachable
            _m38 uint1_t  virtual_gpu_only;                                                                 //{ +0x0000@2  } | .VirtualGpuOnly
            _m39 uint1_t  compute_only;                                                                     //{ +0x0000@3  } | .ComputeOnly
            _m40 uint1_t  independent_vid_pn_v_sync_control;                                                //{ +0x0000@4  } | .IndependentVidPnVSyncControl
            _m41 uint32_t value;                                                                            //{ +0x0000    } | .Value
                                                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGK_DRIVERCAPS.MiscCaps.$", 0x0, false, 0xf7e2312be9d95af9 );                                                                                
            SDK_FIXED_SIZE( u0_misc_caps_t, 0x4 );                                                                                
        };                                                                                                
                                                                                                          
        // WDK 10                                                                                         
        //                                                                                                
        _m000 int64_t                                       highest_acceptable_address;                     //{ +0x0000    } | .HighestAcceptableAddress
        _m001 uint32_t                                      max_allocation_list_slot_id;                    //{ +0x0008    } | .MaxAllocationListSlotId
        _m002 uint64_t                                      aperture_segment_commit_limit;                  //{ +0x0010    } | .ApertureSegmentCommitLimit
        _m003 uint32_t                                      max_pointer_width;                              //{ +0x0018    } | .MaxPointerWidth
        _m004 uint32_t                                      max_pointer_height;                             //{ +0x001c    } | .MaxPointerHeight
        _m005 struct dxgk::pointerflags_t                   pointer_caps;                                   //{ +0x0020    } | .PointerCaps
        _m006 uint32_t                                      interrupt_message_number;                       //{ +0x0024    } | .InterruptMessageNumber
        _m007 uint32_t                                      number_of_swizzling_ranges;                     //{ +0x0028    } | .NumberOfSwizzlingRanges
        _m008 uint32_t                                      max_overlays;                                   //{ +0x002c    } | .MaxOverlays
        _m009 struct dxgk::gammarampcaps_t                  gamma_ramp_caps;                                //{ +0x0030    } | .GammaRampCaps
        _m010 struct dxgk::colortransformcaps_t             color_transform_caps;                           //{ +0x0030    } | .ColorTransformCaps
        _m011 struct dxgk::presentationcaps_t               presentation_caps;                              //{ +0x0034    } | .PresentationCaps
        _m012 uint32_t                                      max_queued_flip_on_v_sync;                      //{ +0x0038    } | .MaxQueuedFlipOnVSync
        _m013 struct dxgk::flipcaps_t                       flip_caps;                                      //{ +0x003c    } | .FlipCaps
        _m014 struct dxgk::vidschcaps_t                     scheduling_caps;                                //{ +0x0040    } | .SchedulingCaps
        _m015 struct dxgk::vidmmcaps_t                      memory_management_caps;                         //{ +0x0044    } | .MemoryManagementCaps
        _m016 struct dxgk::gpuenginetopology_t              gpu_engine_topology;                            //{ +0x004c    } | .GpuEngineTopology
        _m017 enum dxgk::wddmversion_t                      wddm_version;                                   //{ +0x0150    } | .WDDMVersion
        _m018 struct d3dk::mdt::preemption_caps_t           preemption_caps;                                //{ +0x0210    } | .PreemptionCaps
        _m019 uint8_t                                       support_non_vga;                                //{ +0x0218    } | .SupportNonVGA
        _m020 uint8_t                                       support_smooth_rotation;                        //{ +0x0219    } | .SupportSmoothRotation
        _m021 uint8_t                                       support_per_engine_tdr;                         //{ +0x021a    } | .SupportPerEngineTDR
        _m022 uint8_t                                       support_direct_flip;                            //{ +0x021b    } | .SupportDirectFlip
        _m023 uint8_t                                       support_multi_plane_overlay;                    //{ +0x021c    } | .SupportMultiPlaneOverlay
        _m024 uint8_t                                       support_runtime_power_management;               //{ +0x021d    } | .SupportRuntimePowerManagement
        _m025 uint8_t                                       support_surprise_removal_in_hibernation;        //{ +0x021e    } | .SupportSurpriseRemovalInHibernation
        _m026 uint8_t                                       hybrid_discrete;                                //{ +0x021f    } | .HybridDiscrete
        _m027 uint32_t                                      max_overlay_planes;                             //{ +0x0220    } | .MaxOverlayPlanes
        _m028 uint8_t                                       hybrid_integrated;                              //{ +0x0224    } | .HybridIntegrated
        _m029 uint64_t                                      internal_gpu_virtual_address_range_start;       //{ +0x0228    } | .InternalGpuVirtualAddressRangeStart
        _m030 uint64_t                                      internal_gpu_virtual_address_range_end;         //{ +0x0230    } | .InternalGpuVirtualAddressRangeEnd
        _m031 uint8_t                                       support_surprise_removal;                       //{ +0x0238    } | .SupportSurpriseRemoval
        _m032 uint8_t                                       support_multi_plane_overlay_immediate_flip;     //{ +0x0239    } | .SupportMultiPlaneOverlayImmediateFlip
        _m033 uint8_t                                       cursor_scaled_with_multi_plane_overlay_plane0;  //{ +0x023a    } | .CursorScaledWithMultiPlaneOverlayPlane0
        _m034 uint8_t                                       hybrid_acpi_chaining_required;                  //{ +0x023b    } | .HybridAcpiChainingRequired
        _m035 uint32_t                                      max_queued_multi_plane_overlay_flip_v_sync;     //{ +0x023c    } | .MaxQueuedMultiPlaneOverlayFlipVSync
        _m042 u0_misc_caps_t                                misc_caps;                                      //{ +0x0240    } | .MiscCaps
                                                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_DRIVERCAPS.$", 0x0, false, 0x9922fde45d76fc5d );                                              
        SDK_FIXED_SIZE( drivercaps_t, 0x248 );                                                            
    };                                                                                                    
};
#include "magic/drivercaps_t.end.hpp"
SDK_VERIFY( union dxgk::drivercaps_t::u0_misc_caps_t, 0x4 );
SDK_VERIFY( struct dxgk::drivercaps_t, 0x248 );
