#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmasked_interrupt_flags_t.start.hpp"
namespace hal
{
    // [union _HAL_UNMASKED_INTERRUPT_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union unmasked_interrupt_flags_t      
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint1_t  secondary_interrupt;  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .SecondaryInterrupt
        _m01 uint16_t as_ushort;            //{ +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                          
        SDK_MAGIC_PROPERTIES( "_HAL_UNMASKED_INTERRUPT_FLAGS.$", 0x2, true, 0xde2a8c85bfb723d4 );                    
        SDK_FIXED_SIZE( unmasked_interrupt_flags_t, 0x2 );                    
    };                                    
};
#include "magic/unmasked_interrupt_flags_t.end.hpp"
SDK_VERIFY( union hal::unmasked_interrupt_flags_t, 0x2 );
