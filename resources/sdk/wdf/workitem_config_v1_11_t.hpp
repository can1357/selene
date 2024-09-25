#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/workitem_config_v1_11_t.start.hpp"
namespace wdf
{
    struct wdfworkitem_t;

    // [struct _WDF_WORKITEM_CONFIG_V1_11]
    // => Windows 10 v1607
    //
    struct workitem_config_v1_11_t                                                    
    {                                                                                 
        // Windows 10 v1607                                                           
        //                                                                            
        _m00 uint32_t                                         size;                     //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdfworkitem_t*)>* evt_work_item_func;       //{ +0x0008    } | .EvtWorkItemFunc
        _m02 uint8_t                                          automatic_serialization;  //{ +0x0010    } | .AutomaticSerialization
                                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_WORKITEM_CONFIG_V1_11.$", 0x0, false, 0x68ee6910dd5338ed );                        
        SDK_FIXED_SIZE( workitem_config_v1_11_t, 0x18 );                              
    };                                                                                
};
#include "magic/workitem_config_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::workitem_config_v1_11_t, 0x18 );