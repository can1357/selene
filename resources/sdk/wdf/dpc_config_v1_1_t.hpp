#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpc_config_v1_1_t.start.hpp"
namespace wdf
{
    struct wdfdpc_t;

    // [struct _WDF_DPC_CONFIG_V1_1]
    // => Windows 10 v1607
    //
    struct dpc_config_v1_1_t                                                     
    {                                                                            
        // Windows 10 v1607                                                      
        //                                                                       
        _m00 uint32_t                                    size;                     //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdfdpc_t*)>* evt_dpc_func;             //{ +0x0008    } | .EvtDpcFunc
        _m02 uint8_t                                     automatic_serialization;  //{ +0x0010    } | .AutomaticSerialization
                                                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_DPC_CONFIG_V1_1.$", 0x0, false, 0xde8aada3a8910e9b );                        
        SDK_FIXED_SIZE( dpc_config_v1_1_t, 0x18 );                               
    };                                                                           
};
#include "magic/dpc_config_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::dpc_config_v1_1_t, 0x18 );
