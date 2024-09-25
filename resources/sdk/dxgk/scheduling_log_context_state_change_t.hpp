#pragma once
#include <sdkgen/support_library.hpp>
#include "scheduling_log_context_state_t.hpp"

#include "magic/scheduling_log_context_state_change_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE]
    // => WDK 10 (NV)
    //
    struct scheduling_log_context_state_change_t                         
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 void*                                     h_kmd_context;      //{ +0x0000    } | .hKmdContext
        _m01 enum dxgk::scheduling_log_context_state_t new_context_state;  //{ +0x0008    } | .newContextState
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE.$", 0x0, false, 0xc0701e781db8d662 );                  
        SDK_FIXED_SIZE( scheduling_log_context_state_change_t, 0x10 );                  
    };                                                                   
};
#include "magic/scheduling_log_context_state_change_t.end.hpp"
SDK_VERIFY( struct dxgk::scheduling_log_context_state_change_t, 0x10 );
