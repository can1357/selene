#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_line_t.hpp"
#include "kinterrupt_mode_t.hpp"
#include "interrupt_target_t.hpp"
#include "kinterrupt_polarity_t.hpp"

#include "magic/interrupt_line_state_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_LINE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_line_state_t                               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                      
        _m00 enum nt::kinterrupt_polarity_t polarity;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Polarity
        _m01 uint8_t                        emulate_active_both;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EmulateActiveBoth
        _m02 enum nt::kinterrupt_mode_t     trigger_mode;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TriggerMode
        _m03 uint32_t                       flags;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 struct nt::interrupt_line_t    routing;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Routing
        _m05 struct nt::interrupt_target_t  processor_target;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessorTarget
        _m06 uint32_t                       vector;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Vector
        _m07 uint32_t                       priority;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Priority
                                                                
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_LINE_STATE.$", 0x38, true, 0xd5c665357fb34303 );                    
        SDK_FIXED_SIZE( interrupt_line_state_t, 0x38 );                    
    };                                                          
};
#include "magic/interrupt_line_state_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_line_state_t, 0x38 );
