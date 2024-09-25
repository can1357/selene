#pragma once
#include <sdkgen/support_library.hpp>
#include "hidsm_state_t.hpp"
#include "generic_state_t.hpp"

#include "magic/state_t.start.hpp"
namespace hid
{
    // [union _STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union state_t                                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 uint32_t                  state_as_ulong;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateAsUlong
        _m01 enum hid::generic_state_t generic_state;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GenericState
        _m02 enum hid::hidsm_state_t   hidsm_state;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HidsmState
                                                      
        SDK_MAGIC_PROPERTIES( "_STATE.$", 0x4, true, 0x3408c2e7c4e0ffa8 );               
        SDK_FIXED_SIZE( state_t, 0x4 );               
    };                                                
};
#include "magic/state_t.end.hpp"
SDK_VERIFY( union hid::state_t, 0x4 );
