#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipmodel_presenthistorytokenflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS]
    // => WDK 10 (NV)
    //
    struct flipmodel_presenthistorytokenflags_t            
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint1_t  video;                                 //{ +0x0000@0  } | .Video
        _m01 uint1_t  restricted_content;                    //{ +0x0000@1  } | .RestrictedContent
        _m02 uint1_t  clip_to_view;                          //{ +0x0000@2  } | .ClipToView
        _m03 uint1_t  stereo_prefer_right;                   //{ +0x0000@3  } | .StereoPreferRight
        _m04 uint1_t  temporary_mono;                        //{ +0x0000@4  } | .TemporaryMono
        _m05 uint1_t  flip_restart;                          //{ +0x0000@5  } | .FlipRestart
        _m06 uint1_t  hdr_meta_data_changed;                 //{ +0x0000@6  } | .HDRMetaDataChanged
        _m07 uint2_t  alpha_mode;                            //{ +0x0000@7  } | .AlphaMode
        _m08 uint1_t  signal_limit_on_token_completion;      //{ +0x0000@9  } | .SignalLimitOnTokenCompletion
        _m09 uint3_t  y_cb_cr_flags;                         //{ +0x0000@10 } | .YCbCrFlags
        _m10 uint1_t  independent_flip;                      //{ +0x0000@13 } | .IndependentFlip
        _m11 int2_t   independent_flip_stage;                //{ +0x0000@14 } | .IndependentFlipStage
        _m12 uint2_t  independent_flip_release_count;        //{ +0x0000@16 } | .IndependentFlipReleaseCount
        _m13 uint1_t  independent_flip_force_notify_dwm;     //{ +0x0000@18 } | .IndependentFlipForceNotifyDwm
        _m14 uint1_t  use_custom_duration;                   //{ +0x0000@19 } | .UseCustomDuration
        _m15 uint1_t  independent_flip_request_dwm_confirm;  //{ +0x0000@20 } | .IndependentFlipRequestDwmConfirm
        _m16 uint1_t  independent_flip_candidate;            //{ +0x0000@21 } | .IndependentFlipCandidate
        _m17 uint1_t  independent_flip_check_needed;         //{ +0x0000@22 } | .IndependentFlipCheckNeeded
        _m18 uint1_t  independent_flip_true_immediate;       //{ +0x0000@23 } | .IndependentFlipTrueImmediate
        _m19 uint1_t  independent_flip_request_dwm_exit;     //{ +0x0000@24 } | .IndependentFlipRequestDwmExit
        _m20 uint1_t  comp_surface_notified_early;           //{ +0x0000@25 } | .CompSurfaceNotifiedEarly
        _m21 uint1_t  independent_flip_do_not_flip;          //{ +0x0000@26 } | .IndependentFlipDoNotFlip
        _m22 uint1_t  require_paired_token;                  //{ +0x0000@27 } | .RequirePairedToken
        _m23 uint1_t  variable_refresh_override_eligible;    //{ +0x0000@28 } | .VariableRefreshOverrideEligible
        _m24 uint32_t value;                                 //{ +0x0000    } | .Value
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS.$", 0x0, false, 0xa824495dc4941592 );                                     
        SDK_FIXED_SIZE( flipmodel_presenthistorytokenflags_t, 0x4 );                                     
    };                                                     
};
#include "magic/flipmodel_presenthistorytokenflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::flipmodel_presenthistorytokenflags_t, 0x4 );
