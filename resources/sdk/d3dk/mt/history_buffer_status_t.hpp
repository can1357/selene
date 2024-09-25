#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/history_buffer_status_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_HISTORY_BUFFER_STATUS]
    // => WDK 10 (NV)
    //
    struct history_buffer_status_t
    {                             
        // WDK 10            
        //                   
        _m00 uint8_t enabled;       //{ +0x0000    } | .Enabled
                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_HISTORY_BUFFER_STATUS.$", 0x0, false, 0x9f1354589b99f438 );        
        SDK_FIXED_SIZE( history_buffer_status_t, 0x8 );        
    };                            
};
#include "magic/history_buffer_status_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::history_buffer_status_t, 0x8 );
