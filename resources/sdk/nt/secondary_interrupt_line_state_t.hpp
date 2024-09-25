#pragma once
#include <sdkgen/support_library.hpp>
#include "kinterrupt_mode_t.hpp"
#include "kinterrupt_polarity_t.hpp"

#include "magic/secondary_interrupt_line_state_t.start.hpp"
namespace nt
{
    // [struct _SECONDARY_INTERRUPT_LINE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct secondary_interrupt_line_state_t          
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                           
        _m00 enum nt::kinterrupt_polarity_t polarity;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Polarity
        _m01 enum nt::kinterrupt_mode_t     mode;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Mode
        _m02 uint32_t                       vector;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Vector
        _m03 uint8_t                        unmasked;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Unmasked
                                                     
        SDK_MAGIC_PROPERTIES( "_SECONDARY_INTERRUPT_LINE_STATE.$", 0x10, true, 0x8b4a21f445f31d06 );         
        SDK_FIXED_SIZE( secondary_interrupt_line_state_t, 0x10 );         
    };                                               
};
#include "magic/secondary_interrupt_line_state_t.end.hpp"
SDK_VERIFY( struct nt::secondary_interrupt_line_state_t, 0x10 );
