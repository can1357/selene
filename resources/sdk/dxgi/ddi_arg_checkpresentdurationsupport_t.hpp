#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_checkpresentdurationsupport_t.start.hpp"
namespace dxgi
{
    // [struct _DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT]
    // => WDK 10 (NV)
    //
    struct ddi_arg_checkpresentdurationsupport_t
    {                                           
        // WDK 10                              
        //                                     
        _m00 uint64_t h_device;                   //{ +0x0000    } | .hDevice
        _m01 uint32_t vid_pn_source_id;           //{ +0x0008    } | .VidPnSourceId
        _m02 uint32_t desired_present_duration;   //{ +0x000c    } | .DesiredPresentDuration
        _m03 uint32_t closest_smaller_duration;   //{ +0x0010    } | .ClosestSmallerDuration
        _m04 uint32_t closest_larger_duration;    //{ +0x0014    } | .ClosestLargerDuration
                                                
        SDK_NONVOL_PROPERTIES( "_DXGI_DDI_ARG_CHECKPRESENTDURATIONSUPPORT.$", 0x0, false, 0xd9b09508edbd104b );                         
        SDK_FIXED_SIZE( ddi_arg_checkpresentdurationsupport_t, 0x18 );                         
    };                                          
};
#include "magic/ddi_arg_checkpresentdurationsupport_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_checkpresentdurationsupport_t, 0x18 );
