#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/service_trigger_t.start.hpp"
namespace win
{
    struct service_trigger_specific_data_item_t;

    // [struct _SERVICE_TRIGGER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_trigger_t                                          
    {                                                                 
        using pservice_trigger_specific_data_item_t = struct win::service_trigger_specific_data_item_t*;                  
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 uint32_t                               dw_trigger_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwTriggerType
        _m01 uint32_t                               dw_action;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwAction
        _m02 struct nt::guid_t*                     p_trigger_subtype;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTriggerSubtype
        _m03 uint32_t                               c_data_items;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cDataItems
        _m04 pservice_trigger_specific_data_item_t  p_data_items;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pDataItems
                                                                      
        SDK_MAGIC_PROPERTIES( "_SERVICE_TRIGGER.$", 0x20, true, 0x15324c07c8d040cc );                  
        SDK_FIXED_SIZE( service_trigger_t, 0x20 );                    
    };                                                                
};
#include "magic/service_trigger_t.end.hpp"
SDK_VERIFY( struct win::service_trigger_t, 0x20 );
