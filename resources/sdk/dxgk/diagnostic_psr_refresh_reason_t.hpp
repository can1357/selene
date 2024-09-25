#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diagnostic_psr_refresh_reason_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_DIAGNOSTIC_PSR_REFRESH_REASON]
    // => WDK 10 (NV)
    //
    union diagnostic_psr_refresh_reason_t         
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  present;                      //{ +0x0000@0  } | .Present
        _m01 uint1_t  cursor_update;                //{ +0x0000@1  } | .CursorUpdate
        _m02 uint1_t  v_sync_enabled;               //{ +0x0000@2  } | .VSyncEnabled
        _m03 uint1_t  color_transformation_change;  //{ +0x0000@3  } | .ColorTransformationChange
        _m04 uint1_t  brightness_change;            //{ +0x0000@4  } | .BrightnessChange
        _m05 uint1_t  sink_request;                 //{ +0x0000@5  } | .SinkRequest
        _m06 uint1_t  other;                        //{ +0x0000@6  } | .Other
        _m07 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.$", 0x0, false, 0xbec9f7ff39c0ae60 );                            
        SDK_FIXED_SIZE( diagnostic_psr_refresh_reason_t, 0x4 );                            
    };                                            
};
#include "magic/diagnostic_psr_refresh_reason_t.end.hpp"
SDK_VERIFY( union dxgk::diagnostic_psr_refresh_reason_t, 0x4 );
