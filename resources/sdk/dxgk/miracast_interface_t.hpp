#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracast_interface_t.start.hpp"
namespace dxgk
{
    struct miracast_caps_t;
    struct miracast_display_callbacks_t;

    // [struct _DXGK_MIRACAST_INTERFACE]
    // => WDK 10 (NV)
    //
    struct miracast_interface_t                                                      
    {                                                                                
        using dxgkddi_miracast_query_caps_t =        sdk::function<int32_t(void*, uint32_t, struct dxgk::miracast_caps_t*)>*;                                  
        using dxgkddi_miracast_create_context_t =    sdk::function<int32_t(void*, struct dxgk::miracast_display_callbacks_t*, void**, uint32_t*)>*;                                  
        using dxgkddi_miracast_handle_io_control_t = sdk::function<int32_t(void*, void*, uint32_t, void*, uint32_t, void*, uint32_t*)>*;                                  
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 uint16_t                              size;                               //{ +0x0000    } | .Size
        _m01 uint16_t                              version;                            //{ +0x0002    } | .Version
        _m02 void*                                 context;                            //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*           interface_reference;                //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*           interface_dereference;              //{ +0x0018    } | .InterfaceDereference
        _m05 dxgkddi_miracast_query_caps_t         dxgk_ddi_miracast_query_caps;       //{ +0x0020    } | .DxgkDdiMiracastQueryCaps
        _m06 dxgkddi_miracast_create_context_t     dxgk_ddi_miracast_create_context;   //{ +0x0028    } | .DxgkDdiMiracastCreateContext
        _m07 dxgkddi_miracast_handle_io_control_t  dxgk_ddi_miracast_io_control;       //{ +0x0030    } | .DxgkDdiMiracastIoControl
        _m08 sdk::function<void(void*, void*)>*    dxgk_ddi_miracast_destroy_context;  //{ +0x0038    } | .DxgkDdiMiracastDestroyContext
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_MIRACAST_INTERFACE.$", 0x0, false, 0x90f477c13c527103 );                                  
        SDK_FIXED_SIZE( miracast_interface_t, 0x40 );                                  
    };                                                                               
};
#include "magic/miracast_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::miracast_interface_t, 0x40 );
