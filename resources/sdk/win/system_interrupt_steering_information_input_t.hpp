#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/group_affinity_t.hpp"

#include "magic/system_interrupt_steering_information_input_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_interrupt_steering_information_input_t      
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 uint32_t                    gsiv;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Gsiv
        _m01 uint8_t                     controller_interrupt;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ControllerInterrupt
        _m02 uint8_t                     edge_interrupt;        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .EdgeInterrupt
        _m03 uint8_t                     is_primary_interrupt;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .IsPrimaryInterrupt
        _m04 struct nt::group_affinity_t target_affinity;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetAffinity
                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_INTERRUPT_STEERING_INFORMATION_INPUT.$", 0x18, true, 0xbd8a06d75f1700b0 );                     
        SDK_FIXED_SIZE( system_interrupt_steering_information_input_t, 0x18 );                     
    };                                                        
};
#include "magic/system_interrupt_steering_information_input_t.end.hpp"
SDK_VERIFY( struct win::system_interrupt_steering_information_input_t, 0x18 );
