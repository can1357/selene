#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mipi_dsi_interface_t.start.hpp"
namespace dxgk
{
    struct dsi_caps_t;
    struct dsi_reset_t;
    struct dsi_transmission_t;

    // [struct _DXGK_MIPI_DSI_INTERFACE]
    // => WDK 10 (NV)
    //
    struct mipi_dsi_interface_t                                    
    {                                                              
        using pdxgkddi_dsicaps_t =         sdk::function<int32_t(void*, uint32_t, struct dxgk::dsi_caps_t*)>*;                          
        using pdxgkddi_dsitransmission_t = sdk::function<int32_t(void*, uint32_t, struct dxgk::dsi_transmission_t*)>*;                          
        using pdxgkddi_dsireset_t =        sdk::function<int32_t(void*, uint32_t, struct dxgk::dsi_reset_t*)>*;                          
                                                                   
        // WDK 10                                                  
        //                                                         
        _m00 uint16_t                    size;                       //{ +0x0000    } | .Size
        _m01 uint16_t                    version;                    //{ +0x0002    } | .Version
        _m02 void*                       context;                    //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;        //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;      //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_dsicaps_t          dxgk_ddi_dsi_caps;          //{ +0x0020    } | .DxgkDdiDsiCaps
        _m06 pdxgkddi_dsitransmission_t  dxgk_ddi_dsi_transmission;  //{ +0x0028    } | .DxgkDdiDsiTransmission
        _m07 pdxgkddi_dsireset_t         dxgk_ddi_dsi_reset;         //{ +0x0030    } | .DxgkDdiDsiReset
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_MIPI_DSI_INTERFACE.$", 0x0, false, 0xec9b3273ca336a81 );                          
        SDK_FIXED_SIZE( mipi_dsi_interface_t, 0x38 );                          
    };                                                             
};
#include "magic/mipi_dsi_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::mipi_dsi_interface_t, 0x38 );
