#pragma once
#include <sdkgen/support_library.hpp>
#include "../diag_monitor_state_t.hpp"
#include "../diag_display_sampled_gamma_t.hpp"
#include "../diag_display_scanout_state_t.hpp"
#include "../diag_scanout_buffer_content_t.hpp"
#include "../diag_display_hardware_bandwidth_t.hpp"
#include "../diag_display_hardware_error_state_t.hpp"

#include "magic/displaystate_intrusive_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DISPLAYSTATE_INTRUSIVE]
    // => WDK 10 (NV)
    //
    struct displaystate_intrusive_t                                                
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                       vid_pn_target_id;        //{ +0x0000    } | .VidPnTargetId
        _m01 enum dxgk::diag_monitor_state_t                monitor_state;           //{ +0x0004    } | .MonitorState
        _m02 enum dxgk::diag_display_scanout_state_t        display_scanout_state;   //{ +0x0008    } | .DisplayScanoutState
        _m03 struct dxgk::diag_display_sampled_gamma_t      display_sampled_gamma;   //{ +0x000c    } | .DisplaySampledGamma
        _m04 struct dxgk::diag_scanout_buffer_content_t     display_buffer_content;  //{ +0x00f0    } | .DisplayBufferContent
        _m05 enum dxgk::diag_display_hardware_error_state_t display_error_state;     //{ +0x00fc    } | .DisplayErrorState
        _m06 enum dxgk::diag_display_hardware_bandwidth_t   display_bandwidth;       //{ +0x0100    } | .DisplayBandwidth
        _m07 uint32_t                                       return_sub_status;       //{ +0x0104    } | .ReturnSubStatus
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DISPLAYSTATE_INTRUSIVE.$", 0x0, false, 0xf8dff7ee329dbb40 );                       
        SDK_FIXED_SIZE( displaystate_intrusive_t, 0x108 );                         
    };                                                                             
};
#include "magic/displaystate_intrusive_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::displaystate_intrusive_t, 0x108 );
