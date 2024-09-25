#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3dk/mt/present_display_only_flags_t.hpp"

namespace d3dk::mt      { struct move_rect_t;                    }
namespace dxgk::arg::cb { struct present_displayonly_progress_t; }
namespace tag           { struct rect_t;                         }

#include "magic/present_displayonly_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_PRESENT_DISPLAYONLY]
    // => WDK 10 (NV)
    //
    struct present_displayonly_t                                                             
    {                                                                                        
        using dxgkcb_present_displayonly_progress_t = sdk::function<void(const void*, const struct dxgk::arg::cb::present_displayonly_progress_t*)>*;                                  
                                                                                             
        // WDK 10                                                                            
        //                                                                                   
        _m00 uint32_t                                      vid_pn_source_id;                   //{ +0x0000    } | .VidPnSourceId
        _m01 void*                                         p_source;                           //{ +0x0008    } | .pSource
        _m02 uint32_t                                      bytes_per_pixel;                    //{ +0x0010    } | .BytesPerPixel
        _m03 int32_t                                       pitch;                              //{ +0x0014    } | .Pitch
        _m04 struct d3dk::mt::present_display_only_flags_t flags;                              //{ +0x0018    } | .Flags
        _m05 uint32_t                                      num_moves;                          //{ +0x001c    } | .NumMoves
        _m06 struct d3dk::mt::move_rect_t*                 p_moves;                            //{ +0x0020    } | .pMoves
        _m07 uint32_t                                      num_dirty_rects;                    //{ +0x0028    } | .NumDirtyRects
        _m08 struct tag::rect_t*                           p_dirty_rect;                       //{ +0x0030    } | .pDirtyRect
        _m09 dxgkcb_present_displayonly_progress_t         pfn_present_display_only_progress;  //{ +0x0038    } | .pfnPresentDisplayOnlyProgress
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_PRESENT_DISPLAYONLY.$", 0x0, false, 0x7b3bfc878d7960b7 );                                  
        SDK_FIXED_SIZE( present_displayonly_t, 0x40 );                                       
    };                                                                                       
};
#include "magic/present_displayonly_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::present_displayonly_t, 0x40 );
