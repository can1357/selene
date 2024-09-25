#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/monitorlinkinfo_capabilities_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_MONITORLINKINFO_CAPABILITIES]
    // => WDK 10 (NV)
    //
    union monitorlinkinfo_capabilities_t             
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  stereo;                          //{ +0x0000@0  } | .Stereo
        _m01 uint1_t  wide_color_space;                //{ +0x0000@1  } | .WideColorSpace
        _m02 uint1_t  high_color_space;                //{ +0x0000@2  } | .HighColorSpace
        _m03 uint1_t  dynamic_color_space;             //{ +0x0000@3  } | .DynamicColorSpace
        _m04 uint1_t  dynamic_bits_per_color_channel;  //{ +0x0000@4  } | .DynamicBitsPerColorChannel
        _m05 uint1_t  dynamic_color_encoding_format;   //{ +0x0000@5  } | .DynamicColorEncodingFormat
        _m06 uint1_t  dedicated_timing_generation;     //{ +0x0000@6  } | .DedicatedTimingGeneration
        _m07 uint1_t  target_independent_primary;      //{ +0x0000@7  } | .TargetIndependentPrimary
        _m08 uint1_t  sync_lock_identical;             //{ +0x0000@8  } | .SyncLockIdentical
        _m09 uint1_t  hdr10_plus;                      //{ +0x0000@9  } | .Hdr10Plus
        _m10 uint1_t  dolby_vision_low_latency;        //{ +0x0000@10 } | .DolbyVisionLowLatency
        _m11 uint1_t  variable_refresh;                //{ +0x0000@11 } | .VariableRefresh
        _m12 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORLINKINFO_CAPABILITIES.$", 0x0, false, 0xa043b4ae452bfee9 );                               
        SDK_FIXED_SIZE( monitorlinkinfo_capabilities_t, 0x4 );                               
    };                                               
};
#include "magic/monitorlinkinfo_capabilities_t.end.hpp"
SDK_VERIFY( union dxgk::monitorlinkinfo_capabilities_t, 0x4 );
