#pragma once
#include <sdkgen/support_library.hpp>
#include "kspecial_registers_t.hpp"

#include "magic/kprocessor_state_t.start.hpp"
namespace nt
{
    // [struct _KPROCESSOR_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kprocessor_state_t                                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 struct nt::kspecial_registers_t special_registers;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpecialRegisters
        _m01 nt::context                     context_frame;      //{ +0x00e0    +0x00f0    +0x00f0    +0x00f0    } | .ContextFrame
                                                               
        SDK_MAGIC_PROPERTIES( "_KPROCESSOR_STATE.$", 0x5c0, true, 0x1812e4c846a5a9c3 );                  
        SDK_DYNAMIC_SIZE( kprocessor_state_t );                  
    };                                                         
};
#include "magic/kprocessor_state_t.end.hpp"
