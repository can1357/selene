#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_idle_dependency_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_IDLE_DEPENDENCY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_dependency_t    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t processor_index;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorIndex
        _m01 uint8_t  expected_state;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExpectedState
        _m02 uint8_t  allow_deeper_states;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .AllowDeeperStates
        _m03 uint8_t  loose_dependency;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .LooseDependency
                                          
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_IDLE_DEPENDENCY.$", 0x8, true, 0x509c1c9459f71583 );                    
        SDK_FIXED_SIZE( processor_idle_dependency_t, 0x8 );                    
    };                                    
};
#include "magic/processor_idle_dependency_t.end.hpp"
SDK_VERIFY( struct nt::processor_idle_dependency_t, 0x8 );
