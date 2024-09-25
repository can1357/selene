#pragma once
#include <sdkgen/support_library.hpp>
#include "../colorimetry_t.hpp"

#include "magic/settargetadjustedcolorimetry2_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTARGETADJUSTEDCOLORIMETRY2]
    // => WDK 10 (NV)
    //
    struct settargetadjustedcolorimetry2_t                   
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                   target_id;             //{ +0x0000    } | .TargetId
        _m01 struct dxgk::colorimetry_t adjusted_colorimetry;  //{ +0x0004    } | .AdjustedColorimetry
        _m02 uint32_t                   sdr_white_level;       //{ +0x0038    } | .SdrWhiteLevel
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTARGETADJUSTEDCOLORIMETRY2.$", 0x0, false, 0xe874af54bc8ec515 );                     
        SDK_FIXED_SIZE( settargetadjustedcolorimetry2_t, 0x3c );                     
    };                                                       
};
#include "magic/settargetadjustedcolorimetry2_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settargetadjustedcolorimetry2_t, 0x3c );
