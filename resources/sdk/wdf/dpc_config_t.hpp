#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpc_config_t.start.hpp"
namespace wdf
{
    struct wdfdpc_t;

    // [struct _WDF_DPC_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dpc_config_t                                                          
    {                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 uint32_t                                    size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdfdpc_t*)>* evt_dpc_func;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtDpcFunc
        _m02 uint8_t                                     automatic_serialization;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AutomaticSerialization
                                                                                 
        SDK_NONVOL_PROPERTIES( "_WDF_DPC_CONFIG.$", 0x18, true, 0x44f94125dcdcda19 );                        
        SDK_FIXED_SIZE( dpc_config_t, 0x18 );                                    
    };                                                                           
};
#include "magic/dpc_config_t.end.hpp"
SDK_VERIFY( struct wdf::dpc_config_t, 0x18 );
