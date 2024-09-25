#pragma once
#include <sdkgen/support_library.hpp>
#include "event_target_state_t.hpp"
#include "../fx/pnp_state_info_t.hpp"
#include "../wdf/device_pnp_state_t.hpp"

namespace fx { class pkg_pnp_t; }

#include "magic/state_table_t.start.hpp"
namespace pnp
{
    // [struct PNP_STATE_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_table_t                                                 
    {                                                                    
        using pfn_pnp_state_entry_function_t = sdk::function<enum wdf::device_pnp_state_t(class fx::pkg_pnp_t*)>*;                    
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 pfn_pnp_state_entry_function_t          state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 struct pnp::event_target_state_t        first_target_state;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstTargetState
        _m02 const struct pnp::event_target_state_t* other_target_states;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OtherTargetStates
        _m03 union fx::pnp_state_info_t              state_info;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StateInfo
                                                                         
        SDK_MAGIC_PROPERTIES( "PNP_STATE_TABLE.$", 0x20, true, 0x1f75d112c5dd12a5 );                    
        SDK_FIXED_SIZE( state_table_t, 0x20 );                           
    };                                                                   
};
#include "magic/state_table_t.end.hpp"
SDK_VERIFY( struct pnp::state_table_t, 0x20 );
