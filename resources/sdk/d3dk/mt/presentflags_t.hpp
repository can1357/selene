#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENTFLAGS]
    // => WDK 10 (NV)
    //
    struct presentflags_t                            
    {                                                
        // WDK 10                                    
        //                                           
        _m000 uint1_t  blt;                            //{ +0x0000@0  } | .Blt
        _m001 uint1_t  color_fill;                     //{ +0x0000@1  } | .ColorFill
        _m002 uint1_t  flip;                           //{ +0x0000@2  } | .Flip
        _m003 uint1_t  flip_do_not_flip;               //{ +0x0000@3  } | .FlipDoNotFlip
        _m004 uint1_t  flip_do_not_wait;               //{ +0x0000@4  } | .FlipDoNotWait
        _m005 uint1_t  flip_restart;                   //{ +0x0000@5  } | .FlipRestart
        _m006 uint1_t  dst_rect_valid;                 //{ +0x0000@6  } | .DstRectValid
        _m007 uint1_t  src_rect_valid;                 //{ +0x0000@7  } | .SrcRectValid
        _m008 uint1_t  restrict_vid_pn_source;         //{ +0x0000@8  } | .RestrictVidPnSource
        _m009 uint1_t  src_color_key;                  //{ +0x0000@9  } | .SrcColorKey
        _m010 uint1_t  dst_color_key;                  //{ +0x0000@10 } | .DstColorKey
        _m011 uint1_t  linear_to_srgb;                 //{ +0x0000@11 } | .LinearToSrgb
        _m012 uint1_t  present_count_valid;            //{ +0x0000@12 } | .PresentCountValid
        _m013 uint1_t  rotate;                         //{ +0x0000@13 } | .Rotate
        _m014 uint1_t  present_to_bitmap;              //{ +0x0000@14 } | .PresentToBitmap
        _m015 uint1_t  redirected_flip;                //{ +0x0000@15 } | .RedirectedFlip
        _m016 uint1_t  redirected_blt;                 //{ +0x0000@16 } | .RedirectedBlt
        _m017 uint1_t  flip_stereo;                    //{ +0x0000@17 } | .FlipStereo
        _m018 uint1_t  flip_stereo_temporary_mono;     //{ +0x0000@18 } | .FlipStereoTemporaryMono
        _m019 uint1_t  flip_stereo_prefer_right;       //{ +0x0000@19 } | .FlipStereoPreferRight
        _m020 uint1_t  blt_stereo_use_right;           //{ +0x0000@20 } | .BltStereoUseRight
        _m021 uint1_t  present_history_token_only;     //{ +0x0000@21 } | .PresentHistoryTokenOnly
        _m022 uint1_t  present_regions_valid;          //{ +0x0000@22 } | .PresentRegionsValid
        _m023 uint1_t  present_dda;                    //{ +0x0000@23 } | .PresentDDA
        _m024 uint1_t  protected_content_blanked_out;  //{ +0x0000@24 } | .ProtectedContentBlankedOut
        _m025 uint1_t  remote_session;                 //{ +0x0000@25 } | .RemoteSession
        _m026 uint1_t  cross_adapter;                  //{ +0x0000@26 } | .CrossAdapter
        _m027 uint1_t  duration_valid;                 //{ +0x0000@27 } | .DurationValid
        _m028 uint1_t  present_indirect;               //{ +0x0000@28 } | .PresentIndirect
        _m029 uint1_t  present_hmd;                    //{ +0x0000@29 } | .PresentHMD
        _m030 uint32_t value;                          //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENTFLAGS.$", 0x0, false, 0xf01048978f86def );                              
        SDK_FIXED_SIZE( presentflags_t, 0x4 );                              
    };                                               
};
#include "magic/presentflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::presentflags_t, 0x4 );
