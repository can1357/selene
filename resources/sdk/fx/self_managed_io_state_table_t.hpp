#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_progress_t.hpp"
#include "self_managed_io_states_t.hpp"

#include "magic/self_managed_io_state_table_t.start.hpp"
namespace fx
{
    class self_managed_io_machine_t;
    struct self_managed_io_target_state_t;

    // [struct FxSelfManagedIoStateTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct self_managed_io_state_table_t                                          
    {                                                                             
        using pfn_self_managed_io_state_entry_function_t = sdk::function<enum fx::self_managed_io_states_t(class fx::self_managed_io_machine_t*, int32_t*, enum fx::cx_callback_progress_t*)>*;                    
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 pfn_self_managed_io_state_entry_function_t       state_func;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateFunc
        _m01 const struct fx::self_managed_io_target_state_t* target_states;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetStates
        _m02 uint32_t                                         target_states_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetStatesCount
                                                                                  
        SDK_MAGIC_PROPERTIES( "FxSelfManagedIoStateTable.$", 0x18, true, 0x9c507a29d918eab3 );                    
        SDK_FIXED_SIZE( self_managed_io_state_table_t, 0x18 );                    
    };                                                                            
};
#include "magic/self_managed_io_state_table_t.end.hpp"
SDK_VERIFY( struct fx::self_managed_io_state_table_t, 0x18 );
