#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/guid_t.hpp"
#include "stor_pofx_component_idle_state_t.hpp"

#include "magic/stor_pofx_component_v2_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_COMPONENT_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_component_v2_t                                   
    {                                                                 
        using f_states_t = sdk::array<struct stor::port::stor_pofx_component_idle_state_t, 1>;                                       
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                            
        _m00 uint32_t          version;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t          size;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t          f_state_count;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FStateCount
        _m03 uint32_t          deepest_wakeable_f_state;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DeepestWakeableFState
        _m04 struct nt::guid_t id;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Id
        _m05 uint32_t          deepest_adapter_power_required_f_state;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DeepestAdapterPowerRequiredFState
        _m06 uint32_t          deepest_crash_dump_ready_f_state;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .DeepestCrashDumpReadyFState
        _m07 f_states_t        f_states;                                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FStates
                                                                      
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_V2.$", 0x48, true, 0x6413311dabd7d55c );                                       
        SDK_FIXED_SIZE( stor_pofx_component_v2_t, 0x48 );                                       
    };                                                                
};
#include "magic/stor_pofx_component_v2_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_component_v2_t, 0x48 );
