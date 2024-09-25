#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_register_layout32_t.start.hpp"
namespace win
{
    // [class ArmRegisterLayout32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class arm_register_layout32_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint8_t                 ncrn;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NCRN
        _m01 uint32_t                nsaa;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NSAA
        _m02 sdk::array<int32_t, 16> float_reg_used;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FloatRegUsed
        _m03 int32_t                 reg_on_stack;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RegOnStack
        _m04 int32_t                 float_on_stack;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .FloatOnStack
        _m05 uint16_t                entries;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Entries
        _m06 uint32_t                current_offset;  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .CurrentOffset
        _m07 int32_t                 run_count;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RunCount
        _m08 int32_t                 in_run;          //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .InRun
        _m09 int32_t                 total_slots;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TotalSlots
                                                    
        SDK_MAGIC_PROPERTIES( "ArmRegisterLayout32.$", 0x88, true, 0x27fdf7d6070ef597 );               
        SDK_FIXED_SIZE( arm_register_layout32_t, 0x88 );               
    };                                              
};
#include "magic/arm_register_layout32_t.end.hpp"
SDK_VERIFY( class win::arm_register_layout32_t, 0x88 );
