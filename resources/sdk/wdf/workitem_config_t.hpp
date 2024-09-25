#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/workitem_config_t.start.hpp"
namespace wdf
{
    struct wdfworkitem_t;

    // [struct _WDF_WORKITEM_CONFIG]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct workitem_config_t                                                          
    {                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                            
        _m00 uint32_t                                         size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void(struct wdf::wdfworkitem_t*)>* evt_work_item_func;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtWorkItemFunc
        _m02 uint8_t                                          automatic_serialization;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AutomaticSerialization
                                                                                      
        SDK_NONVOL_PROPERTIES( "_WDF_WORKITEM_CONFIG.$", 0x18, true, 0x71faae2b85d8fccb );                        
        SDK_FIXED_SIZE( workitem_config_t, 0x18 );                                    
    };                                                                                
};
#include "magic/workitem_config_t.end.hpp"
SDK_VERIFY( struct wdf::workitem_config_t, 0x18 );
