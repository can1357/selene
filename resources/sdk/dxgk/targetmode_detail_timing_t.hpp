#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/video_signal_standard_t.hpp"
#include "../nt/displayid_detailed_timing_type_i_t.hpp"

#include "magic/targetmode_detail_timing_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TARGETMODE_DETAIL_TIMING]
    // => WDK 10 (NV)
    //
    struct targetmode_detail_timing_t                                     
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 enum d3dk::mdt::video_signal_standard_t       video_standard;  //{ +0x0000    } | .VideoStandard
        _m01 uint32_t                                      timing_id;       //{ +0x0004    } | .TimingId
        _m02 struct nt::displayid_detailed_timing_type_i_t detail_timing;   //{ +0x0008    } | .DetailTiming
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_TARGETMODE_DETAIL_TIMING.$", 0x0, false, 0x11aa172db37b2c76 );               
        SDK_FIXED_SIZE( targetmode_detail_timing_t, 0x1c );               
    };                                                                    
};
#include "magic/targetmode_detail_timing_t.end.hpp"
SDK_VERIFY( struct dxgk::targetmode_detail_timing_t, 0x1c );
