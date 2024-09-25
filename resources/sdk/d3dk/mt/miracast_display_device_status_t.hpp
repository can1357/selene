#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracast_display_device_status_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS]
    // => WDK 10 (NV)
    //
    struct miracast_display_device_status_t  
    {                                        
        enum class u0_state_t : int32_t      
        {                                    
            stopped =       0x0,               // WDK 10
            start_pending = 0x1,               // WDK 10
            started =       0x2,               // WDK 10
            stop_pending =  0x3,               // WDK 10
        };                                   
                                             
        // WDK 10                            
        //                                   
        _m00 u0_state_t                state;  //{ +0x0000    } | .State
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS.$", 0x0, false, 0x1f0aeecddea792b2 );      
        SDK_FIXED_SIZE( miracast_display_device_status_t, 0x4 );      
    };                                       
};
#include "magic/miracast_display_device_status_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::miracast_display_device_status_t, 0x4 );
