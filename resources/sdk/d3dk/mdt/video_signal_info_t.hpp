#pragma once
#include <sdkgen/support_library.hpp>
#include "_2dregion_t.hpp"
#include "video_signal_standard_t.hpp"
#include "../../d3d/ddi/rational_t.hpp"
#include "../../d3d/ddi/video_signal_scanline_ordering_t.hpp"

#include "magic/video_signal_info_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDEO_SIGNAL_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct video_signal_info_t                                                      
    {                                                                               
        struct u0_additional_signal_info_t                                          
        {                                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                      
            _m06 int3_t  scan_line_ordering;                                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ScanLineOrdering
            _m07 uint6_t v_sync_freq_divider;                                         //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VSyncFreqDivider
                                                                                    
            SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.$", 0x4, true, 0xb3882cdb1989317c );                                           
            SDK_FIXED_SIZE( u0_additional_signal_info_t, 0x4 );                                           
        };                                                                          
                                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                          
        _m00 enum d3dk::mdt::video_signal_standard_t         video_standard;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VideoStandard
        _m01 struct d3dk::mdt::_2dregion_t                   total_size;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalSize
        _m02 struct d3dk::mdt::_2dregion_t                   active_size;             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ActiveSize
        _m03 struct d3d::ddi::rational_t                     v_sync_freq;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .VSyncFreq
        _m04 struct d3d::ddi::rational_t                     h_sync_freq;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .HSyncFreq
        _m05 uint64_t                                        pixel_rate;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .PixelRate
        _m08 u0_additional_signal_info_t                     additional_signal_info;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AdditionalSignalInfo
        _m09 enum d3d::ddi::video_signal_scanline_ordering_t scan_line_ordering;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ScanLineOrdering
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDEO_SIGNAL_INFO.$", 0x38, true, 0x3828cc71dc0e42f1 );                       
        SDK_FIXED_SIZE( video_signal_info_t, 0x38 );                                
    };                                                                              
};
#include "magic/video_signal_info_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::video_signal_info_t::u0_additional_signal_info_t, 0x4 );
SDK_VERIFY( struct d3dk::mdt::video_signal_info_t, 0x38 );
