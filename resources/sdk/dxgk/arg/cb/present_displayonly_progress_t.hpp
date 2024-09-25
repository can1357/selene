#pragma once
#include <sdkgen/support_library.hpp>
#include "../../present_display_only_progress_id_t.hpp"

#include "magic/present_displayonly_progress_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS]
    // => WDK 10 (NV)
    //
    struct present_displayonly_progress_t                                   
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                      vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 enum dxgk::present_display_only_progress_id_t progress_id;       //{ +0x0004    } | .ProgressId
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS.$", 0x0, false, 0x8302ecf442be2260 );                 
        SDK_FIXED_SIZE( present_displayonly_progress_t, 0x8 );                 
    };                                                                      
};
#include "magic/present_displayonly_progress_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::present_displayonly_progress_t, 0x8 );
