#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/workitem_config_v1_13_t.start.hpp"
namespace wdf
{
    struct wdfworkitem_t;

    // [struct _WDF_WORKITEM_CONFIG_V1_13]
    // => Windows 10 v1607
    //
    struct workitem_config_v1_13_t                                                    
    {                                                                                 
        // Windows 10 v1607                                                           
        //                                                                            
        _m00 uint32_t                                         size;                     //{ +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdfworkitem_t*)>* evt_work_item_func;       //{ +0x0008    } | .EvtWorkItemFunc
        _m02 uint8_t                                          automatic_serialization;  //{ +0x0010    } | .AutomaticSerialization
                                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_WORKITEM_CONFIG_V1_13.$", 0x0, false, 0xef8111a3ce010660 );                        
        SDK_FIXED_SIZE( workitem_config_v1_13_t, 0x18 );                              
    };                                                                                
};
#include "magic/workitem_config_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::workitem_config_v1_13_t, 0x18 );
