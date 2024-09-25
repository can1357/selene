#pragma once
#include <sdkgen/support_library.hpp>
#include "bdcb_status_update_type_t.hpp"

#include "magic/bdcb_status_update_context_t.start.hpp"
namespace wdf
{
    // [struct _BDCB_STATUS_UPDATE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bdcb_status_update_context_t                      
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                   
        _m00 enum wdf::bdcb_status_update_type_t status_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StatusType
                                                             
        SDK_NONVOL_PROPERTIES( "_BDCB_STATUS_UPDATE_CONTEXT.$", 0x4, true, 0xe25aa7b77c344b10 );            
        SDK_FIXED_SIZE( bdcb_status_update_context_t, 0x4 );            
    };                                                       
};
#include "magic/bdcb_status_update_context_t.end.hpp"
SDK_VERIFY( struct wdf::bdcb_status_update_context_t, 0x4 );
