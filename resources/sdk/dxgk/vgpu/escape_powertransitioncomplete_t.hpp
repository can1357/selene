#pragma once
#include <sdkgen/support_library.hpp>
#include "escape_head_t.hpp"

#include "magic/escape_powertransitioncomplete_t.start.hpp"
namespace dxgk::vgpu
{
    // [struct _DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE]
    // => WDK 10 (NV)
    //
    struct escape_powertransitioncomplete_t               
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 struct dxgk::vgpu::escape_head_t header;       //{ +0x0000    } | .Header
        _m01 uint32_t                         power_state;  //{ +0x000c    } | .PowerState
                                                          
        SDK_NONVOL_PROPERTIES( "_DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE.$", 0x0, false, 0xdc5ff5fd60c86563 );            
        SDK_FIXED_SIZE( escape_powertransitioncomplete_t, 0x10 );            
    };                                                    
};
#include "magic/escape_powertransitioncomplete_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu::escape_powertransitioncomplete_t, 0x10 );
