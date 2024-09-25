#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg { struct getdisplaystate_intrusive_t;    }
namespace dxgk::arg { struct getdisplaystate_nonintrusive_t; }

#include "magic/display_diagnostics_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISPLAY_DIAGNOSTICS_INTERFACE]
    // => WDK 10 (NV)
    //
    struct display_diagnostics_interface_t                                                   
    {                                                                                        
        using dxgkddi_getdisplaystatenonintrusive_t = sdk::function<int32_t(void*, struct dxgk::arg::getdisplaystate_nonintrusive_t*)>*;                                         
        using dxgkddi_getdisplaystateintrusive_t =    sdk::function<int32_t(void*, struct dxgk::arg::getdisplaystate_intrusive_t*)>*;                                         
                                                                                             
        // WDK 10                                                                            
        //                                                                                   
        _m00 uint16_t                               size;                                      //{ +0x0000    } | .Size
        _m01 uint16_t                               version;                                   //{ +0x0002    } | .Version
        _m02 void*                                  context;                                   //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*            interface_reference;                       //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*            interface_dereference;                     //{ +0x0018    } | .InterfaceDereference
        _m05 dxgkddi_getdisplaystatenonintrusive_t  dxgk_ddi_get_display_state_non_intrusive;  //{ +0x0020    } | .DxgkDdiGetDisplayStateNonIntrusive
        _m06 dxgkddi_getdisplaystateintrusive_t     dxgk_ddi_get_display_state_intrusive;      //{ +0x0028    } | .DxgkDdiGetDisplayStateIntrusive
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE.$", 0x0, false, 0x367d6873d736ae67 );                                         
        SDK_FIXED_SIZE( display_diagnostics_interface_t, 0x30 );                                         
    };                                                                                       
};
#include "magic/display_diagnostics_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::display_diagnostics_interface_t, 0x30 );
