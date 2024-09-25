#pragma once
#include <sdkgen/support_library.hpp>
#include "platform_state_t.hpp"

namespace nt { struct platform_idle_accounting_t;             }
namespace nt { struct processor_platform_state_residencies_t; }

#include "magic/platform_states_t.start.hpp"
namespace ppm
{
    // [struct _PPM_PLATFORM_STATES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct platform_states_t                                                            
    {                                                                                   
        using idle_test_t =                      sdk::function<uint32_t(void*, uint32_t, uint32_t)>*;                               
        using idle_pre_execute_t =               sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*;                               
        using idle_complete_t =                  sdk::function<void(void*, uint32_t, uint32_t, uint32_t, uint32_t*)>*;                               
        using query_platform_state_residency_t = sdk::function<int32_t(void*, struct nt::processor_platform_state_residencies_t*)>*;                               
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m00 uint32_t                                    state_count;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateCount
        _m01 uint32_t                                    interface_version;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterfaceVersion
        _m02 uint32_t                                    processor_count;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorCount
        _m03 uint8_t                                     coordinated_interface;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CoordinatedInterface
        _m04 idle_test_t                                 idle_test;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IdleTest
        _m05 idle_pre_execute_t                          idle_pre_execute;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdlePreExecute
        _m06 idle_complete_t                             idle_complete;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IdleComplete
        _m07 query_platform_state_residency_t            query_platform_state_residency;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryPlatformStateResidency
        _m08 struct nt::platform_idle_accounting_t*      accounting;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Accounting
        _m09 sdk::array<struct ppm::platform_state_t, 1> state;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .State
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m10 uint8_t                                     deep_sleep_enabled;              //{ +0x0038    +0x0038    +0x0038    } | .DeepSleepEnabled
                                                                                        
        SDK_MAGIC_PROPERTIES( "_PPM_PLATFORM_STATES.$", 0x1c0, true, 0x4cde552a7e227f9 );                               
        SDK_DYNAMIC_SIZE( platform_states_t );                                          
    };                                                                                  
};
#include "magic/platform_states_t.end.hpp"
