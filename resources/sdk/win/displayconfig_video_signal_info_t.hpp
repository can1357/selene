#pragma once
#include <sdkgen/support_library.hpp>
#include "displayconfig_2dregion_t.hpp"
#include "displayconfig_rational_t.hpp"
#include "../nt/displayconfig_scanline_ordering_t.hpp"

#include "magic/displayconfig_video_signal_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_video_signal_info_t                               
    {                                                                      
        struct u0_additional_signal_info_t                                 
        {                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                             
            _m05 uint16_t video_standard;                                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .videoStandard
            _m06 uint6_t  v_sync_freq_divider;                               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .vSyncFreqDivider
                                                                           
            SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.$", 0x4, true, 0xd0e607a7084720e );                                           
            SDK_FIXED_SIZE( u0_additional_signal_info_t, 0x4 );                                           
        };                                                                 
                                                                           
        enum class u5_scan_line_ordering_t : int32_t                       
        {                                                                  
            force_uint32 =               -0x1,                               // WDK 10
            unspecified =                0x0,                                // WDK 10
            progressive =                0x1,                                // WDK 10
            interlaced =                 0x2,                                // WDK 10
            interlaced_upperfieldfirst = 0x2,                                // WDK 10
            interlaced_lowerfieldfirst = 0x3,                                // WDK 10
        };                                                                 
                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 uint64_t                               pixel_rate;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pixelRate
        _m01 struct win::displayconfig_rational_t   h_sync_freq;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .hSyncFreq
        _m02 struct win::displayconfig_rational_t   v_sync_freq;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .vSyncFreq
        _m03 struct win::displayconfig_2dregion_t   active_size;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .activeSize
        _m04 struct win::displayconfig_2dregion_t   total_size;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .totalSize
        _m07 u0_additional_signal_info_t            additional_signal_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .AdditionalSignalInfo
        _m08 uint32_t                               video_standard;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .videoStandard
        _m09 int32_t                                scan_line_ordering;      //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .scanLineOrdering
                                                                           
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.$", 0x30, true, 0x4a088408cafac3db );                       
        SDK_FIXED_SIZE( displayconfig_video_signal_info_t, 0x30 );                       
    };                                                                     
};
#include "magic/displayconfig_video_signal_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_video_signal_info_t::u0_additional_signal_info_t, 0x4 );
SDK_VERIFY( struct win::displayconfig_video_signal_info_t, 0x30 );
