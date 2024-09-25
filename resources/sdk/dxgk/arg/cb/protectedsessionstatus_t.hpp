#pragma once
#include <sdkgen/support_library.hpp>
#include "../../protected_session_status_t.hpp"

#include "magic/protectedsessionstatus_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_PROTECTEDSESSIONSTATUS]
    // => WDK 10 (NV)
    //
    struct protectedsessionstatus_t                                    
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 void*                                 h_protected_session;  //{ +0x0000    } | .hProtectedSession
        _m01 enum dxgk::protected_session_status_t status;               //{ +0x0008    } | .Status
                                                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_PROTECTEDSESSIONSTATUS.$", 0x0, false, 0xd37ff7c7b0530329 );                    
        SDK_FIXED_SIZE( protectedsessionstatus_t, 0x10 );                    
    };                                                                 
};
#include "magic/protectedsessionstatus_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::protectedsessionstatus_t, 0x10 );
