#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_arg_get_gamma_control_caps_t.start.hpp"
namespace dxgi
{
    struct gamma_control_capabilities_t;

    // [struct DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS]
    // => WDK 10 (NV)
    //
    struct ddi_arg_get_gamma_control_caps_t                                  
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint64_t                                   h_device;              //{ +0x0000    } | .hDevice
        _m01 struct dxgi::gamma_control_capabilities_t* p_gamma_capabilities;  //{ +0x0008    } | .pGammaCapabilities
                                                                             
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS.$", 0x0, false, 0x453ae0c048f34847 );                     
        SDK_FIXED_SIZE( ddi_arg_get_gamma_control_caps_t, 0x10 );                     
    };                                                                       
};
#include "magic/ddi_arg_get_gamma_control_caps_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_arg_get_gamma_control_caps_t, 0x10 );
