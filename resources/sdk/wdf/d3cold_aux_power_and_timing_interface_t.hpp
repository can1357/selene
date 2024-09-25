#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3cold_aux_power_and_timing_interface_t.start.hpp"
namespace wdf
{
    // [struct _D3COLD_AUX_POWER_AND_TIMING_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct d3cold_aux_power_and_timing_interface_t                            
    {                                                                         
        using pd3cold_request_aux_power_t = sdk::function<int32_t(void*, uint32_t, uint32_t*)>*;                        
                                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m00 uint16_t                                 size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                 version;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                    context;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*              interface_reference;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*              interface_dereference;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<void(void*, uint8_t)>*     request_core_power_rail;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestCorePowerRail
        _m06 pd3cold_request_aux_power_t              request_aux_power;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RequestAuxPower
        _m07 sdk::function<int32_t(void*, uint32_t)>* request_perst_delay;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RequestPerstDelay
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3COLD_AUX_POWER_AND_TIMING_INTERFACE.$", 0x38, true, 0x7b56a3dcc89353f3 );                        
        SDK_FIXED_SIZE( d3cold_aux_power_and_timing_interface_t, 0x38 );                        
    };                                                                        
};
#include "magic/d3cold_aux_power_and_timing_interface_t.end.hpp"
SDK_VERIFY( struct wdf::d3cold_aux_power_and_timing_interface_t, 0x38 );
