#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_device_vidpn_ownership_info_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO]
    // => WDK 10 (NV)
    //
    struct get_device_vidpn_ownership_info_t      
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t h_device;                     //{ +0x0000    } | .hDevice
        _m01 uint8_t  b_failed_dwm_acquire_vid_pn;  //{ +0x0004    } | .bFailedDwmAcquireVidPn
                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO.$", 0x0, false, 0x21314e802200d3c5 );                            
        SDK_FIXED_SIZE( get_device_vidpn_ownership_info_t, 0x8 );                            
    };                                            
};
#include "magic/get_device_vidpn_ownership_info_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_device_vidpn_ownership_info_t, 0x8 );
