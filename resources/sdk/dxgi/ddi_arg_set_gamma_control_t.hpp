#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_control_t.hpp"

#include "magic/ddi_arg_set_gamma_control_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_ARG_SET_GAMMA_CONTROL]
    // => WDK 10 (NV)
    //
    struct ddi_arg_set_gamma_control_t                  
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint64_t                     h_device;       //{ +0x0000    } | .hDevice
        _m01 struct dxgi::gamma_control_t gamma_control;  //{ +0x0008    } | .GammaControl
                                                        
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_SET_GAMMA_CONTROL.$", 0x0, false, 0xf48587b1c9c2c010 );              
        SDK_FIXED_SIZE( ddi_arg_set_gamma_control_t, 0x3030 );              
    };                                                  
};
#include "magic/ddi_arg_set_gamma_control_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_set_gamma_control_t, 0x3030 );
